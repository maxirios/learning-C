#include <stdio.h>

int sum(const int *arr, size_t n) {
	int result = 0;
	for (size_t i = 0; i < n; i++) {
		result += arr[i];
	}
	return result;
}

int main(void) {
	int numbers[5] = {10, 20, 30, 40, 50};
	size_t n = 5;

	int total = sum(numbers, n);
	printf("sum is %d\n", total);

	return 0;
}
