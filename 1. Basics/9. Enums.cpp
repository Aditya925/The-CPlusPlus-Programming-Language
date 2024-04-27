import <iostream>;
#include "BasicsHeader.h"

/*
	-> An enumeration is a user-defined data type that consists of integral constants. To define an 
	   enumeration, keyword enum is used.
*/

// Here, the name of the enumeration is season and spring, summer and winter are values of type season.
enum season { spring, summer, autumn, winter };

/* 
   By default, spring is 0, summer is 1 and so on.You can change the default value of an enum element 
   during declaration(if necessary).

   enum days{
       monday = 0,
	   tuesday = 4,
	   wednesday= 8,
	   tuesday = 12
   };
*/

int Enumeration() {
	season s;
	s = spring;

	std::cout << s << std::endl;
	std::cout << summer << std::endl;

	return 0;
}