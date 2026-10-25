#include "sensor_msg.h"

static uint8_t is_valid_type(int8_t type){
	return type <= SENSOR_LIGHT;
}

void fill_msg(sensor_msg_t *msg, uint8_t node_id, uint8_t type, float value) {
	msg->node_id = node_id;
	msg->type = is_valid_type(type) ? type : SENSOR_TEMPERATURE;
	msg->value = value;
}
