import <iostream>;
#include "OopHeader.h"

/*
	=> Class in C++ is the building block that leads to Object-Oriented programming. 
	=> It is a user-defined data type, which holds its own data members and member functions, which 
	   can be accessed and used by creating an instance of that class. 
	=> A C++ class is like a blueprint for an object.
*/

class Player {
public:
	int x{}, y{};
	int speed{};
};

// Passed class object by reference
void Move(Player& player1, int xa, int ya) {
	player1.x += xa * player1.speed;
	player1.y += ya * player1.speed;
	std::cout << player1.x << std::endl;
	std::cout << player1.y << std::endl;
}

void Class_Example() {
	Player player1;
	player1.x = 10;
	player1.y = 20;
	player1.speed = 3;
	Move(player1, 1, -1);
}
