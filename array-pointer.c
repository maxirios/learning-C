#include <stdio.h>

int main(void) {
	int numbers[5] = {10, 20, 30, 40, 50};
	int *p = numbers;

	printf("numbers[2] = %d\n", numbers[2]);
	printf("p[2]       = %d\n", p[2]);
	printf("*(p + 2)   = %d\n" , *(p + 2));

	return 0;
}
