import <iostream>;
#include "BasicsHeader.h"

void Conditions() {
	int age{23};
	if (age < 18) {
		std::cout << "Not an adult" << std::endl;
	}
	else if (age>= 18) {
		std::cout << "Adult" << std::endl;
	}
	else {
		std::cout << "Invalid Input" << std::endl;
	}
}

