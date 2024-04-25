import <iostream>;
#include "MemoryHeader.h"

/*
	=> When a variable is declared as a reference, it becomes an alternative name for an existing variable. 
	=> A variable can be declared as a reference by putting ‘&’ in the declaration.
	=> References themselves are not new variables ie: they don't occupy memory.
*/

void References(){
	int count{30};
	int& r_count = count;

	std::cout << "Value of count is: " << count << std::endl;
	std::cout << "Value of reference to the count r_count is: " << r_count << std::endl;
	std::cout << std::endl;

	// Memory location of variable and it's reference is the same unlike pointers.
	std::cout << "Value of memory location of count is: " << &count << std::endl;
	std::cout << "Value of memory location of reference to the count r_count is: " << &r_count << std::endl;
	std::cout << std::endl;

	// Setting new values to variable count
	count = 50;
	std::cout << "Updated Value of count is: " << count << std::endl;
	std::cout << "Updated Value of reference to the count r_count is: " << r_count << std::endl;
	std::cout << std::endl;

	// Value of variable is also updates if we update value of it's reference
	r_count = 100;
	std::cout << "Updated Value of count is: " << count << std::endl;
	std::cout << "Updated Value of reference to the count r_count is: " << r_count << std::endl;
}