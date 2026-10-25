#include <stdio.h>
#include <stdlib.h>

int main(void) {
	size_t n = 5;
	int *data = malloc (n * sizeof(int));

	if (data == NULL) {
		printf("malloc failed\n");
		return 1;
	}

	for (size_t i = 0; i < n; i++) {
		data[i] = (int)(i * 10);
	}

	for (size_t i = 0; i < n; i++) {
		printf("data[%zu] = %d\n", i , data[i]);
	}

	free(data);
	
	return 0;
}
