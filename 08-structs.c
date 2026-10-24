#include <stdio.h>
#include <stdint.h>

// ESP-MESH message example
typedef struct {
	uint8_t node_id;
	uint8_t type;
	float value;
} sensor_msg_t;

int main(void) {
	sensor_msg_t msg = { .node_id = 3, .type = 1, .value = 23.5f };

	printf("node %u, type %u, value %.1f\n", msg.node_id, msg.type, msg.value);
	printf("sizeof(sensor_msg_t) = %zu\n", sizeof(sensor_msg_t));

	return 0;
}
