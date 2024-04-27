import <iostream>;
#include "BasicsHeader.h"

static int a{10};

void Static_Display(){
	std::cout << "The variable a = " << a << " is only accessible in this C++ file. " << std::endl;
}