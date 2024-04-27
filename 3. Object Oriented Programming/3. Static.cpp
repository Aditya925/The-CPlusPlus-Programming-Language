import <iostream>;
#include "OopHeader.h"

class Entity {
public:
	int x{}, y{};
	void Display(){
		std::cout << x << "," << y << std::endl;
	}
};

int Static_Class(){
	Entity e;
	e.x = 10;
	e.y = 20;

	Entity e1 = {3,5};

	e.Display();
	e1.Display();

	return 0;
}