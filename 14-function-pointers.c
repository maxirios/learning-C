#include <stdio.h>

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main(void) {
	int (*op)(int, int) = add;
	printf("result: %d\n",op(3, 4));

	op = mul;
	printf("result: %d\n", op(3, 4));

	return 0;
}
