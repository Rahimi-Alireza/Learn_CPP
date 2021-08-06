#include <iostream>

int main(){
	int x = 0;
	int y = 5;
	int z = 10;

	if (x % 2 == 0)
		std::cout << "Even"; //zog
	else
		std::cout << "Odd"; //fard
	int f = (y%2 == 0) ? 1 : 2;
	std::cout << f;
}

