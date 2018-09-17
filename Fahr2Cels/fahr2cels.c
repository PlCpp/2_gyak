#include <stdio.h>

int main() {
	int lower = -40;
	int upper = 100;
	int step = 10;
	
	int i = lower;
	for (; i <= upper; i += step) {
		printf("%d Fahr = %fC\n", i, 5./9 * (i-32));
	}
	
	return 0;
}
