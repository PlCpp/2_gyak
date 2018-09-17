#include <stdio.h>

#define lower -40
#define upper 100
#define step 10 

#define fahr2Cels(x) (5./9 * (x - 32))

int main() {
	//lower = 30; ez hiba lenne
	int i = lower;
	for (; i <= upper; i += step) {
		//printf("%d Fahr = %fC\n", i, 5./9 * (i-32));
		printf("%d Fahr = %fC\n", i, fahr2Cels(i));
	}
	
	return 0;
}
