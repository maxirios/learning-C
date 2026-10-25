#include "sensor_msg.h"

void fill_msg(sensor_msg_t *msg, uint8_t node_id, uint8_t type, float value) {
	msg->node_id = node_id;
	msg->type = type;
	msg->value = value;
}
