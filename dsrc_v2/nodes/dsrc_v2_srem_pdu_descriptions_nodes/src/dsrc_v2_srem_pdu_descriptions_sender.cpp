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
#include <dsrc_v2_srem_pdu_descriptions_sender.h>


/*
 *
 */
void
wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions::start()
{
    encoder_ = new wind::encoder_dsrc_v2_srem_pdu_descriptions::WerEncoder(slogger_, debug_);
    std::stringstream port;
    port << output_port_;
    host_ = output_ip_ + ":" + std::to_string(output_port_);
	slogger_->print() << "Starting UDP client: remoteHost(" << tools::green(host_) << ")";
	this->udp_sender_ = new wind::comm::UDPSender(output_ip_, port.str());
	
	#if WIND_ROS_VERSION == 1	    				                
		this->subscriber_ = node_handle_.subscribe(topic_, 10, &wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions::callback, this);
	#else		
		auto callback1 = [this](const dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM::SharedPtr msg) {this->callback(msg);};
		this->subscriber = this->create_subscription<dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM>(topic_, 10, callback1);
    #endif
	
	slogger_->print() << "Subscribing to topic: " << topic_;
}

/*
 *
 */
void
wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions::callback(
#if WIND_ROS_VERSION == 1
  const dsrc_v2_srem_pdu_descriptions_msgs::SREM::ConstPtr& msg)
#else		
  const std::shared_ptr<dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM>& msg)
#endif
{	
	if(busy_)
		return;
	busy_ = true;

    slogger_->print() << "Received SREM message on '" << tools::green(topic_) << "' topic";
    int buf_len = encoder_->encode(msg, &buff_[REQUEST_HEADER_SIZE_]);
    if(buf_len == -1) {
        failed_++;
        return;
    }
	
    // Header (all values in BIG ENDIAN))
    char* header = (char*)buff_;
    header[0]  = 1;    // Header version
    header[1]  = 0;    // Request=0 Indication=1
    header[2]  = 0;    // User flags
    header[3]  = 1;    // 1 for WER encoding
    header[4]  = 2;    // BTP Type
    header[5]  = 3;    // TOPO_SCOPED_BROADCAST
    header[8]  = (btp_port_ >> 8) & 0xff;
    header[9]  = btp_port_ & 0xff;
    header[42] = (buf_len >> 8) & 0xff;
    header[43] = buf_len & 0xff;
	    
	//slogger_->print() << "Sending UDP message to " << output_ip_ << ":" << output_port_ << " (" << tools::white(std::to_string(REQUEST_HEADER_SIZE_ + buf_len)) << " bytes)";	
				
    if(show_hex_) {
        slogger_->print() << "Header:  " << tools::bufferToHex(buff_, REQUEST_HEADER_SIZE_);
        slogger_->print() << "Payload: " << tools::bufferToHex(buff_ + REQUEST_HEADER_SIZE_, buf_len);
    }
    
    if(dlogger_ && dlogger_->isEnabled()) {
        dlogger_->log("payload", tools::bufferToHex(buff_ + REQUEST_HEADER_SIZE_, buf_len));
    }
			
    this->udp_sender_->send(buff_, buf_len + REQUEST_HEADER_SIZE_);
    //slogger_->print() << "SREM REQUEST messages sent: success(" << ++messages_counter_ << "/" << failed_ << ")";
	print_message(REQUEST_HEADER_SIZE_, buf_len);
	slogger_->print() << tools::generateLine(buf_len, ">");
	
	busy_ = false;
}

void
wind::wind_ros::Sender_dsrc_v2_srem_pdu_descriptions::print_message(std::size_t headerLen, std::size_t messageLen) {
	std::stringstream _host_;
	_host_ << "host(" << host_ << ")";

	std::stringstream _len_;
	_len_ << "len(" << tools::white(std::to_string(headerLen + messageLen)) << ") ";
	
	std::string _success_ = "success(" + std::to_string(++messages_counter_) + "/" + std::to_string(failed_) + ") ";
	
	slogger_->print() << "Sending message: name(SREM) header(REQUEST) " << _host_.str() << " " << _len_.str() << _success_;	
}
