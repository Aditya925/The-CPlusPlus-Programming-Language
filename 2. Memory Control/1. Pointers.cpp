import <iostream>;

// A Pointer is an integer that stores a memory address

int Pointers(){

	int count{10};
	int* p_count = &count;

	std::cout << "Value of count is: " << count << std::endl;
	std::cout << "Value of pointer count is: " << p_count << std::endl;

	
	*p_count = *p_count + 1;		// This statement updates value of count on same memory location.(Dereferencing)

	std::cout << "Updated Value of count is: " << count << std::endl;
	std::cout << "Value of pointer count is: " << p_count << std::endl;

	return 0;
}