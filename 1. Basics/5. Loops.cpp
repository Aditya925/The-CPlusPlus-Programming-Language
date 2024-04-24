import <iostream>;
#include "BasicsHeader.h"

/*
	In Programming, sometimes there is a need to perform some operation more than once 
	or (say) n number of times. Loops come into use when we need to repeatedly execute a 
	block of statements. 
*/

void while_loop() {
	int count{10};
	while (count > 0) {
		std::cout << count << std::endl;
		count--;
	}
}

void for_loop() {
	for (int i = 0; i < 10; ++i) {
		std::cout << i << std::endl;
	}
}

void do_while() {
	int i = 5;
	do {
		std::cout << i << " ";
	} while (i--);
}

void Loops() {
	while_loop();
	std::cout << std::endl;
	for_loop();
	std::cout << std::endl;
	do_while();
}