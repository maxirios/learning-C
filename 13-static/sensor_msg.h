#pragma once
#include <stdint.h>

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

void fill_msg(sensor_msg_t *msg, uint8_t node_id, uint8_t type, float value);
