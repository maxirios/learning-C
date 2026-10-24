#include <stdio.h>
#include <string.h>

int main(void) {
	int numbers[5] = {10, 20, 30, 40, 50};
	char name[] = "ESP32";

	printf("sizeof(numbers) = %zu\n", sizeof(numbers));
	printf("sizeof(name) = %zu\n", sizeof(name));
	printf("strlen(name) = %zu\n", strlen(name));

	for (size_t i = 0; i < sizeof(name); i++) {
		printf("name[%zu] = '%c' (%d)\n", i, name[i], name[i]);
	}

	return 0;
}
