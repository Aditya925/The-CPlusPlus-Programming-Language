import <iostream>;
#include "OopHeader.h"

/*
	 Multiple Inheritance is a feature of C++ where a class can inherit from more than 
	 one class. i.e one subclass is inherited from more than one base class.
*/

class A{
	public:
		void Function_a(){
			std::cout << "Class A" << std::endl;
		}
};
class B{
	public:
		void Function_b(){
			std::cout << "Class B" << std::endl;
		}
};

class C : public A, public B{
    public:
		void Display(){
			Function_a();
			Function_b();
			std::cout << "Class C" << std::endl;
		}
};

int Multiple_Inheritance(){

	C entity;
	entity.Display();

	return 0;
}