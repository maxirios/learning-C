#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

typedef enum {
	SENSOR_TEMPERATURE,
	SENSOR_HUMIDITY,
	SENSOR_LIGHT
} sensor_type_t;

typedef struct {
	uint8_t node_id;
	uint8_t type;
	float value;
} sensor_msg_t;

int main(void) {
	sensor_msg_t msg = { .node_id = 3, .type = SENSOR_HUMIDITY, .value = 60.0f };

	printf("node %u, type %u, value %.1f\n", msg.node_id, msg.type, msg.value);
	printf("sizeof(sensor_msg_t) = %zu\n", sizeof(sensor_msg_t));

        printf("offset of node_id = %zu\n", offsetof(sensor_msg_t, node_id));
        printf("offset of type    = %zu\n", offsetof(sensor_msg_t, type));
        printf("offset of value   = %zu\n", offsetof(sensor_msg_t, value));

	return 0;
}
