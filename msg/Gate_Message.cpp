/** 
* struct Gate_Message description
* 
* This file was auto-generated. Please Do not edit
* 
* [Version 1.1]
*
*/

#include "Gate_Message.h"

MSG_140000::MSG_140000(void) {
	reset();
}

void MSG_140000::serialize(Block_Buffer &buffer) const {
	buffer.write_string(account);
	buffer.write_string(session);
	buffer.write_string(gate_ip);
	buffer.write_int32(gate_port);
}

int MSG_140000::deserialize(Block_Buffer &buffer) {
	account = buffer.read_string();
	session = buffer.read_string();
	gate_ip = buffer.read_string();
	gate_port = buffer.read_int32();
	return 0;
}

void MSG_140000::reset(void) {
	account.clear();
	session.clear();
	gate_ip.clear();
	gate_port = 0;
}

MSG_140001::MSG_140001(void) {
	reset();
}

void MSG_140001::serialize(Block_Buffer &buffer) const {
	buffer.write_string(account);
}

int MSG_140001::deserialize(Block_Buffer &buffer) {
	account = buffer.read_string();
	return 0;
}

void MSG_140001::reset(void) {
	account.clear();
}

MSG_140100::MSG_140100(void) {
	reset();
}

void MSG_140100::serialize(Block_Buffer &buffer) const {
}

int MSG_140100::deserialize(Block_Buffer &buffer) {
	return 0;
}

void MSG_140100::reset(void) {
}

MSG_140200::MSG_140200(void) {
	reset();
}

void MSG_140200::serialize(Block_Buffer &buffer) const {
	buffer.write_int64(role_id);
}

int MSG_140200::deserialize(Block_Buffer &buffer) {
	role_id = buffer.read_int64();
	return 0;
}

void MSG_140200::reset(void) {
	role_id = 0;
}
