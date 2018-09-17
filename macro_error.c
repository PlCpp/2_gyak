#include <stdio.h>

#define sqr(x) ((x) * (x))

int main() {
	int x = 3;
	printf("Sqr(%d) = %d\n",x, sqr(x++));
	
	return 0;
}
