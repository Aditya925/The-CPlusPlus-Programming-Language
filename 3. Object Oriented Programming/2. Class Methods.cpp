import <iostream>;
#include "OopHeader.h"

/*
	-> Methods are functions that belongs to the class.
	-> There are two ways to define functions that belongs to a class:
	   1: Inside class definition
       2: Outside class definition
*/

// Inside example
class MyClass{          
public:               
    void myMethod(){
        std::cout << "Hello World!";
    }
};

int Inside_Class(){
    MyClass myObj;         // Create an object of MyClass
    myObj.myMethod();      // Call the method
    return 0;
}

// Outside example
class Player{        // The class
public:              // Access specifier
    void run();   // Method/function declaration
};
void Player::run(){
    std::cout << "Hello World!";
}

int Outside_Class(){
    Player player1;
    player1.run();
    return 0;
}

// Using parameters
class Car{
public:
    int speed(int maxSpeed);
};
int Car::speed(int maxSpeed) {
    return maxSpeed;
}

int Parameters(){
    Car mustang;
    std::cout << mustang.speed(200); 
    return 0;
}