#include <stdio.h>

void count_call(void) {
	static int calls = 0;
	calls++;
	printf("calls: %d\n", calls);
}

int main(void) {
	const int limit = 3;
	// limit = 5; will result in an error

	for (int i = 0; i < limit; i++) {
		count_call();
	}

	return 0;
}
