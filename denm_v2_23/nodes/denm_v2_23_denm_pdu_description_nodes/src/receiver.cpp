/*
 *
 * Copyright (C) 2017-2024 German Aerospace Center e.V. (https://www.dlr.de)
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
 * File automatically generated with DLR Wind v2 (2024)
 * 
 * This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:1.0
 * 
 * Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *     wg1(1) camPduRelease2(103900) major-version-2(2) minor-version-1(1)}
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
#include <udp_receiver.h>
#include <tools.h>
#include <disk_logger.h>
#include <screen_logger.h>
#include <denm_v2_23_denm_pdu_description_receiver.h>
//#include <message_rate_tracker.h>
#include <functional>



/**
 *
 */
class ReceiverNode
{
public:
    ReceiverNode() : input_port_(0), debug_(false), topic_(""),
                     udp_receiver_(nullptr), dlogger_(nullptr), slogger_(nullptr),
                     show_hex_(false)
					 #if WIND_ROS_VERSION == 1 
					   , node_handle_("~")
					 #endif
	{
		//rate_tracker_(node_handle_, "message_rate", 0.5, 5), 
		//receivers_.resize(SENDERS_POOL_SIZE); 		
		
        //for (auto& receiver : receivers_) {            
        //}
    }

    ~ReceiverNode() {
        delete udp_receiver_;
        delete dlogger_;
        delete slogger_;
		
		#if WIND_ROS_VERSION == 1 
		  delete receiver_;
		#endif
		//delete rate_tracker_;		        
    }

    /**
	 *
	 */
    void receiveMsgCallback(const void* buf, const size_t& buf_size)
    {        
		slogger_->print() << "" << tools::generateLine(buf_size, "<");
        slogger_->print() << "Received incoming stream of " << buf_size << " bytes";
		
		//rate_tracker_.incrementCount();
		//slogger_->print() << "Current message rate: " << tools::green((rate_tracker_.getCurrentRateFormatted())) << " msgs/sec";
    
        const int INDICATION_HEADER_SIZE = 52;
        const int REQUEST_HEADER_SIZE    = 44;
    
        const uint8_t *buffer        = (const uint8_t *) buf;
        int8_t offset                = int(buffer[1]) ? INDICATION_HEADER_SIZE : REQUEST_HEADER_SIZE;
        unsigned int protocolVersion = int(buffer[0 + offset]);
        unsigned int messageId       = int(buffer[1 + offset]);
    
        if(int(buffer[1]))            
			slogger_->print() << "Incoming INDICATION msgId(" << messageId << ":" << protocolVersion << ") headerLen(" << int(offset) << ") payloadLen(" << tools::white(std::to_string((buf_size - offset))) << ")";
        else
            slogger_->print() << "Incoming REQUEST msgId(" << messageId << ":" << protocolVersion << ") headerLen(" << int(offset) << ") payloadLen(" << tools::white(std::to_string((buf_size - offset))) << ")";
    
        if(show_hex_) {            			
            slogger_->print() << "Header:  " << tools::bufferToHex(buffer, offset);
            slogger_->print() << "Payload: " << tools::bufferToHex(buffer + offset, buf_size - offset);
        }
				
        if(dlogger_ && dlogger_->isEnabled()) {            
            dlogger_->log("payload", tools::bufferToHex(buffer + offset, buf_size - offset));
        }
    
        if(messageId == MESSAGE_ID && protocolVersion == PROTOCOL_VERSION) {			            
            receiver_->incoming_message(buf);
		}            
    }

    void run()
    {
        //slogger_->print() << "Starting ROS node" << ros::this_node::getName();
		slogger_->print() << "Starting ROS " << std::to_string(WIND_ROS_VERSION) << " node";
		
		//rate_tracker_ = new MessageRateTracker(node_handle_, "message_rate", 0.5, 5, slogger_);
	
        #if WIND_ROS_VERSION == 1 
		  receiver_ = new wind::wind_ros::Receiver_denm_v2_23_denm_pdu_description();
		#else
          receiver_ = std::make_shared<wind::wind_ros::Receiver_denm_v2_23_denm_pdu_description>();
		#endif

		receiver_->set_topic(topic_);
		receiver_->set_debug(debug_);
		receiver_->set_screen_logger(slogger_);
		receiver_->start();
	
		slogger_->print() << "Registering message name(" << tools::bold(tools::cyan("DENM")) << ")";
        slogger_->print() << "Starting UDP server port(" << tools::bold(tools::cyan(std::to_string(input_port_))) << ")";
		
        udp_receiver_ = new wind::comm::UDPReceiver(input_port_);
        //udp_receiver_->setReceiveCallbackFunction(boost::bind(&ReceiverNode::receiveMsgCallback, this, _1, _2));
		udp_receiver_->setReceiveCallbackFunction(std::bind(&ReceiverNode::receiveMsgCallback, this, 
            std::placeholders::_1, 
            std::placeholders::_2));
				
		/*udp_receiver_->setReceiveCallbackFunction(boost::bind(&ReceiverNode::receiveMsgCallback, this, 
			boost::placeholders::_1, 
			boost::placeholders::_2));*/
		
        udp_receiver_->startReading();
    
        slogger_->print(tools::bold(tools::green("Ready!")));
    
		#if WIND_ROS_VERSION == 1
          ros::spin();
		#else
		  rclcpp::spin(receiver_);
          rclcpp::shutdown();
		#endif
    }

    void set_input_port(int port) {
        input_port_ = port;
    }

    void set_topic(const std::string& t) {
        topic_ = t;
    }
	    	
    void enable_disk_logger(const std::string& folder, const std::string& file) {
        if (!dlogger_) {
            dlogger_ = new DiskLogger(true);
        }
        if (!dlogger_->enable(folder, file)) {
            slogger_->print() << "Failed to enable disk logger for folder: " << folder;
        }
    }
	
    void enable_debug() {
        debug_ = true;
    }
	
    void enable_show_hex() {
        show_hex_ = true;
    }
	
    void set_screen_logger(ScreenLogger* logger) {
        if (logger) {
            delete slogger_; 
            slogger_ = logger;
        } else {            
            slogger_->fatal() << "Attempted to set a null screen logger";
        }
    }

private:
    #if WIND_ROS_VERSION == 1 
	  ros::NodeHandle                      node_handle_; 
      wind::wind_ros::Receiver_denm_v2_23_denm_pdu_description* receiver_;
    #else
      std::shared_ptr<wind::wind_ros::Receiver_denm_v2_23_denm_pdu_description> receiver_;
    #endif
	
    int                                  input_port_;    
    std::string                          topic_;
    bool                                 debug_;
    bool                                 show_hex_;
    wind::comm::UDPReceiver*             udp_receiver_;
    DiskLogger*                          dlogger_;
    ScreenLogger*                        slogger_;
    //MessageRateTracker*                  rate_tracker_;		

};

void printUsage(ScreenLogger* slogger, bool isError = false) {    
    if (!isError) {        
        slogger->print(tools::bold(tools::custom(100, 100, 100, 
            "Usage: [--name nodeName] [--port portNumber] [--topic topic] [--debug] [--show-hex] [--log-to-disk] [--log-file filename]")));
        slogger->print(tools::custom(80, 80, 80, "Default values in include/wind_constants.h"));
        slogger->print("");
    } else {
        slogger->print("Usage: [--name nodeName] [--port portNumber] [--topic topic] [--debug] [--show-hex] [--log-to-disk] [--log-file filename]");
    }
}

/**
 *
 */
//////////////// Main ////////////////
int main(int argc, char** argv) {	
    ScreenLogger* slogger = new ScreenLogger();

    /*#if WIND_ROS_VERSION == 1
	  slogger->print() << banner::create_ros1_banner();
    #else
      slogger->print() << banner::create_ros2_banner();
    #endif*/

    slogger->print("");
    #if WIND_ROS_VERSION == 1
      slogger->print(tools::bold(tools::green("********************************************************************************")));
      slogger->print("");      
      slogger->print("                               " + tools::bold(tools::white("Wind Client (Receiver)")));
      slogger->print("");      
      slogger->print(tools::bold(tools::green("********************************************************************************")));
    #else
      slogger->print(tools::bold(tools::green("================================================================================")));
      slogger->print("");      
      slogger->print("                               " + tools::bold(tools::white("Wind Client (Receiver)")));
      slogger->print("");      
      slogger->print(tools::bold(tools::green("================================================================================")));
    #endif	
	slogger->print("");	

    //Setting default values (defined in wind_constants.h)
    std::string _name  = RECEIVER_NODE_NAME;
    std::string _topic = RECEIVER_ROS_TOPIC;
    std::string _logfo = LOG_DIRECTORY_PATH;
	std::string _logfi = "";
    int         _port  = DEFAULT_RECEIVER_UDP_PORT;
    bool        _debug = WIND_DEBUG_ENABLED;
	bool        _showh = SHOW_HEX;
    bool        _log   = LOG_TO_DISK;
    
	// parsing arguments
	for (int i = 1; i < argc; ++i) {
		std::string arg = argv[i];
		
		if (arg == "--port") {
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
		else if (arg == "--name") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --name requires a value"));
				printUsage(slogger, true);
				return 1;
			}
			_name = argv[++i];
		}
		else if (arg == "--topic") {
			if (i + 1 >= argc) {
				slogger->print(tools::red("Error: --topic requires a value"));
				printUsage(slogger, true);
				return 1;
			}
			_topic = argv[++i];
		}
		else if (arg == "--debug") {
			_debug = true;
		}
		else if (arg == "--show-hex") {
			_showh = true;
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
    slogger->print() << "| " << tools::cyan("Publishing to:") << "     : " << tools::yellow(_topic);
	slogger->print() << "| " << tools::cyan("Message name") << "       : " << tools::yellow("DENM");
    slogger->print() << "| " << tools::cyan("Input port") << "         : " << tools::yellow(std::to_string(_port));	
	slogger->print() << "| " << tools::cyan("Message Id") << "         : " << tools::yellow(std::to_string(MESSAGE_ID) + ":" + std::to_string(PROTOCOL_VERSION));	
	slogger->print() << "| " << tools::cyan("Encoding protocol") << "  : " << tools::yellow("WER");    	
    slogger->print() << "| " << tools::cyan("Debug enabled") << "      : " << tools::bool_to_status(_debug);
    slogger->print() << "| " << tools::cyan("Show hex enabled") << "   : " << tools::bool_to_status(_showh);
    slogger->print() << "| " << tools::cyan("Log to disk enabled") << ": " << tools::bool_to_status(_log);
	
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

    ReceiverNode node;
    node.set_input_port(_port);
    node.set_topic(_topic);	
    node.set_screen_logger(slogger);
    if(_debug) node.enable_debug();	
	if(_showh) node.enable_show_hex();
    if(_log)   node.enable_disk_logger(_logfo, _logfi);
	
    node.run();

    return 0;
}