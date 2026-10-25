#include <stdio.h>
#include <stdint.h>

typedef struct{
	uint8_t node_id;
	uint8_t type;
	float value;
} sensor_msg_t;

void fill_msg(sensor_msg_t *msg, uint8_t node_id, uint8_t type, float value) {
	msg->node_id = node_id;
	msg->type = type;
	msg->value = value;
}

int main(void) {
	sensor_msg_t msg;
	fill_msg(&msg, 3, 1, 23.5f);
	printf("node %u, type %u, value %.1f\n", msg.node_id, msg.type, msg.value);

	return 0;
}
