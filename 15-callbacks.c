#include <stdio.h>

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int apply(int (*op)(int, int), int x, int y) {
	return op(x,y);
}

int main(void) {
	printf("result: %d\n", apply(add, 3, 4));
	printf("result: %d\n", apply(mul, 3, 4));

	return 0;
}
