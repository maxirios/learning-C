#include <stdio.h>
#include "sensor_msg.h"

int main(void) {
	sensor_msg_t msg;
	fill_msg(&msg, 3, 1, 23.5f);
	printf("node %u, type %u, value %.1f\n", msg.node_id, msg.type, msg.value);
	printf("%u\n", is_valid_type(1));
	return 0;
}
