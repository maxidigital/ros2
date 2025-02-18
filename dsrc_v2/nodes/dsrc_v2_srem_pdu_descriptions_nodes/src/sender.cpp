/*
 *
 * Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
 * Institute of Transportation Systems. (https://www.dlr.de/ts/)
 *
 * 
 * Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 * 
 * SPDX-License-Identifier: EPL-2.0
 * 
 *
 * 
 * File automatically generated with DLR Wind v2
 * 
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
 * 
 * Module: SREM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) srem(3) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#if WIND_ROS_VERSION == 1 
 #include <ros/ros.h>
#else 
 #include <rclcpp/rclcpp.hpp>
#endif

#include <wind_constants.h>
#include <disk_logger.h>
#include <screen_logger.h>
#include <tools.h>
#include <dsrc_v2_srem_pdu_descriptions_sender.h>

using namespace wind;

/**
 *
 */
class SenderNode
{
public:
    SenderNode() : slogger_(nullptr), dlogger_(nullptr), debug_(false), show_hex_(false) {		
	}

    ~SenderNode() {        
        delete slogger_;
        delete dlogger_;			
    }

    /*
	 * Run method
	 */
    void run() {
        // Modules
        #if WIND_ROS_VERSION == 1 
          slogger_->print() << "Starting " << tools::cyan("ROS1") << " node " << tools::white(ros::this_node::getName()) << "";
          wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions* sender_ = new wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions();
		#else
          slogger_->print() << "Starting " << tools::cyan("ROS2") << " node";
		  auto sender_ = std::make_shared<wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions>();
	    #endif
		
        sender_->set_output_ip(output_ip_);
        sender_->set_output_port(output_port_);
        sender_->set_topic(topic_);
        sender_->set_debug(debug_);
        sender_->set_show_hex(show_hex_);
        sender_->set_screen_logger(slogger_);
        sender_->set_disk_logger(dlogger_);
        sender_->start();

        slogger_->print() << tools::bold(tools::green("Ready!"));

        #if WIND_ROS_VERSION == 1 
          ros::spin();
		#else
		  rclcpp::spin(sender_);
          rclcpp::shutdown();
		#endif
    }

    void set_output_port(int port) {
        output_port_ = port;
    }
    
    void set_output_ip(std::string address) {
        output_ip_ = address;
    }
    
    void set_topic(std::string t) {
        topic_ = t;
    }
    
    void set_debug(bool t) {
        debug_ = t;
    }

    void enable_disk_logger(const std::string& folder, const std::string& file) {
        if (!dlogger_) {
            dlogger_ = new DiskLogger(false);
        }
        if (!dlogger_->enable(folder, file)) {
            slogger_->print() << "Failed to enable disk logger for folder: " << folder;
        }
    }

    void set_screen_logger(ScreenLogger *logger) {
        slogger_ = logger;
    }
    
    void enable_show_hex() {
        show_hex_ = true;
    }

private:
    wind::comm::UDPSender* udp_sender_;
    std::string            topic_;
    std::string            output_ip_;
    int                    output_port_;
    bool                   debug_;
    bool                   show_hex_;
    DiskLogger*            dlogger_;
    ScreenLogger*          slogger_;    
};


void printUsage(ScreenLogger* slogger, bool isError = false) {    
    if (!isError) {        
        slogger->print(tools::bold(tools::purple("Usage: [--name nodeName] [--topic topic] [--address ipAddress] [--port portNumber] [--debug] [--show-hex] [--log-to-disk]")));
        slogger->print(tools::purple("Default values in include/wind_constants.h"));
        slogger->print("");
    } else {
        slogger->print("Usage: [--name nodeName] [--topic topic] [--address ipAddress] [--port portNumber] [--debug] [--show-hex] [--log-to-disk]");
    }
}

/**
 *
 */
//////////////// Main ////////////////
int main(int argc, char** argv)
{
	ScreenLogger* slogger = new ScreenLogger();
	
	slogger->print("");
	#if WIND_ROS_VERSION == 1
      slogger->print(tools::bold(tools::blue("********************************************************************************")));
      slogger->print("");      
      slogger->print("                               " + tools::bold(tools::white("Wind Client (Sender)")));
      slogger->print("");      
      slogger->print(tools::bold(tools::blue("********************************************************************************")));
    #else
      slogger->print(tools::bold(tools::blue("================================================================================")));
      slogger->print("");      
      slogger->print("                               " + tools::bold(tools::white("Wind Client (Sender)")));
      slogger->print("");      
      slogger->print(tools::bold(tools::blue("================================================================================")));
    #endif				
    slogger->print("");

    //Setting default values (defined in wind_constants.h)
    std::string _name  = SENDER_NODE_NAME;
    std::string _topic = SENDER_ROS_TOPIC;
    std::string _ip    = DEFAULT_SENDER_IP;
	std::string _logfo = LOG_DIRECTORY_PATH;
	std::string _logfi = "";
    int         _port  = DEFAULT_SENDER_UDP_PORT;
    bool        _debug = WIND_DEBUG_ENABLED;
	bool        _showh = SHOW_HEX;
    bool        _log   = LOG_TO_DISK;

	// parsing arguments
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];
		
		if (arg == "--name") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --name requires a value"));
				printUsage(slogger, true);
				return 1;
			}
			_name = argv[++i];
		}
		else if (arg == "--port") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --port requires a value"));
				printUsage(slogger, true);
				return 1;
			}
			try {
				_port = std::stoi(argv[++i]);
			} catch (const std::exception& e) {
				slogger->print(tools::red("Error: Invalid port number"));
				return 1;
			}
		}
		else if (arg == "--address") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --address requires an IP address"));
				printUsage(slogger, true);
				return 1;
			}
			_ip = argv[++i];
		}
		else if (arg == "--topic") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --topic requires a value"));
				printUsage(slogger, true);
				return 1;
			}
			_topic = argv[++i];
		}
		else if (arg == "--show-hex") {
			_showh = true;
		}
		else if (arg == "-l" || arg == "--logger-level") {
			int result = system("rosrun rqt_logger_level rqt_logger_level");
			(void)result;
			return 0;
		}
		else if (arg == "--debug") {
			_debug = true;
		}
		else if (arg == "--log-to-disk") {
			_log = true;
		}
		else if (arg == "--log-file") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --log-file requires a filename"));
				printUsage(slogger, true);
				return 1;
			}
			_logfi = argv[++i];
		}
		else {
			slogger->print(tools::red("Error: Unknown argument '" + arg + "'"));
			printUsage(slogger, true);
			return 1;
		}
	}
	
    
    slogger->print(tools::purple("+------------------------------------------------------------------------------+")); 
	slogger->print() << "| " << tools::cyan("ROS version") << "        : " << tools::bold(tools::green(std::to_string(WIND_ROS_VERSION)));
    slogger->print() << "| " << tools::cyan("ROS node name") << "      : " << tools::yellow(_name);
    slogger->print() << "| " << tools::cyan("Subscribing to") << "     : " << tools::yellow(_topic);
	slogger->print() << "| " << tools::cyan("Message name") << "       : " << tools::yellow("SREM");	
	slogger->print() << "| " << tools::cyan("Output address") << "     : " << tools::yellow(_ip);	
    slogger->print() << "| " << tools::cyan("Output port") << "        : " << tools::yellow(std::to_string(_port));	
	slogger->print() << "| " << tools::cyan("Message Id") << "         : " << tools::yellow(std::to_string(MESSAGE_ID) + ":" + std::to_string(PROTOCOL_VERSION));	
	slogger->print() << "| " << tools::cyan("Encoding protocol") << "  : " << tools::yellow("WER");    	
    slogger->print() << "| " << tools::cyan("Debug") << "              : " << tools::bool_to_status(_debug);
    slogger->print() << "| " << tools::cyan("Show hex") << "           : " << tools::bool_to_status(_showh);
    slogger->print() << "| " << tools::cyan("Log to disk") << "        : " << tools::bool_to_status(_log);
	
    if(_log)
        slogger->print() << "| " << tools::cyan("Log folder") << "         : " << tools::yellow(_logfo);
    slogger->print(tools::purple("+------------------------------------------------------------------------------+"));
    slogger->print("");
	printUsage(slogger);

	#if WIND_ROS_VERSION == 1
	    ros::init(argc, argv, _name); 
	#else
        rclcpp::init(argc, argv);
    #endif
	
    SenderNode node;
    node.set_topic(_topic);
    node.set_output_ip(_ip);
    node.set_output_port(_port);
    node.set_debug(_debug);
	node.set_screen_logger(slogger);
	if(_showh) node.enable_show_hex();
    if(_log) node.enable_disk_logger(std::string(_logfo), std::string(_logfi));

    node.run();

    return 0;
}