import <iostream>;
#include "BasicsHeader.h"

struct Player{
	int a{};
	int b{};
	void move(int xa, int xb){
		a += xa;
		b += xb;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
	}
};

void Struct(){
	Player player1;
	player1.move(3, 4);
}