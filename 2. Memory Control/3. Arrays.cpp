import <iostream>;
#include "MemoryHeader.h"

/*
	An Array is a data structure that is used to store multiple values of similar 
	data types in a contiguous memory location.
*/

int Arrays(){
	int Balance[10]{};
	int ID[] = {1,2,3,4,5};
	int Example[5] = {1,2,3,4,5};
	int Partial[3] = {1,2};

	std::cout << "Balance array is declared with 10 elements as zero" << std::endl;
	for(int i = 0; i < std::size(Balance); ++i){
		std::cout << Balance[i] << std::endl;
	}

	std::cout << "ID Array is initialised with values without declaring its size" << std::endl;
	for (int i = 0; i < std::size(ID); ++i) {
		std::cout << ID[i] << std::endl;
	}

	std::cout << "Example array is inititalized with 5 elements and assigned values" << std::endl;
	for (int i = 0; i < std::size(Example); ++i) {
		std::cout << Partial[i] << std::endl;
	}

	std::cout << "Partial array is given 3 size with 2 elements" << std::endl;
	for (int i = 0; i < std::size(Partial); ++i) {
		std::cout << Partial[i] << std::endl;
	}

	return 0;
}