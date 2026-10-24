#include <stdio.h>

void swap(int *a, int *b) {
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main(void) {
	int x = 1;
	int y = 2;
	
	swap(&x, &y);
	printf("x is now %d and y is %d\n", x, y);

	return 0;
}
