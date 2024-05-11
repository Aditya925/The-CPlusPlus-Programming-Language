import <iostream>;
#include <string>
#include "BasicsHeader.h"

void Strings(){

	// Declaring strings
	std::string name{"Aditya"};
	std::cout << "Name is " << name << std::endl;

	// Getline() Function
	std::string s;
	std::cout << "Enter String: ";
	std::getline(std::cin, s);
	std::cout << "String is: " << s << std::endl;
}