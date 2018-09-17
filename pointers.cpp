#include <iostream>

int main() {
	
	int x = 3;
	int* ip = &x;
	std::cout << ip << std::endl;
	std::cout << *ip << std::endl;
	
	const int s = 5;
	const int* cip = &s;
	std::cout << *cip << std::endl;
	
	cip = &x;
	std::cout << *cip << std::endl;
	//*cip = 5; //fordítási hiba
	
	int* const icp = &x;
	*icp = 22;
	std::cout << *icp << std::endl;
	//icp = &s; //fordítási hiba
	
	const int* const cicp = &x;
	std::cout << *cicp;
	
	//cicp = &s; //fordítási hiba
	//*cicp = 56; //fordítási hiba
	
	return 0;
}
