#include <iostream>
#include <stdlib.h>

int main() {
	#ifdef WINDOWS 
		system("cls");
	#else
		system("clear");
	#endif
}
