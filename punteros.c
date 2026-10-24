#include <stdio.h>

int main(void) {
	int x = 27;
	int *p = &x;

	printf("x is     : %d\n", x);
	printf("x is in  : %p\n", (void *)&x);
	printf("p is     : %p\n", (void *)p);
	printf("value at : %d\n", *p);

	*p = 32;
	printf("x is now : %d\n", x);

	return 0;
}
