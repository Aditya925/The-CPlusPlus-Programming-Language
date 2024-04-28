import <iostream>;
#include "OopHeader.h"

/*
	Constructor in C++ is a special method that is invoked automatically at the time of object 
	creation. It is used to initialize the data members of new objects generally. The constructor 
	in C++ has the same name as the class or structure. It constructs the values i.e. provides data 
	for the object which is why it is known as a constructor.

	-> Constructor is a member function of a class, whose name is the same as the class name.
	-> Constructor is a special type of member function that is used to initialize the data members for 
	   an object of a class automatically when an object of the same class is created.
	-> Constructor is invoked at the time of object creation. It constructs the values 
	   i.e. provides data for the object that is why it is known as a constructor.
	-> Constructors do not return value, hence they do not have a return type.
	-> A constructor gets called automatically when we create the object of the class.
	-> Constructors can be overloaded.
	-> A constructor can not be declared virtual.
*/

class Student{
public:
	int age{};
	int roll_no{};

	Student(int a, int r) {
		age = a;
		roll_no = r;
		std::cout << age << std::endl;
		std::cout << roll_no << std::endl;
	}
};

int Constructors(){
	Student student1(23, 1710);
	return 0;
}