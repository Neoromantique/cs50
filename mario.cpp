#include <iostream>



main() {

	int height;
	int counter = 0;
	int i = 2;
	int spaces = 1;

	std::cin >> height;
	
	while(i < height) {
		spaces = height - i;
		for(spaces; spaces != 0; spaces--) {
			std::cout << " ";
		}
		for(int c = i; c != 0; c--) {
			std::cout << "#";
		}
		i++;
		std::cout << "\n";	
	}

};
