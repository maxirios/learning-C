#include <stdio.h>

void add_one(int *n) {
	*n = *n + 1;
}

int main(void) {
	int x = 5;

	add_one(&x);
	printf("x is now : %d\n", x);

	return 0;
}
