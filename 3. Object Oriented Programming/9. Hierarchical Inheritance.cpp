import <iostream>;
#include "OopHeader.h"

/*  
   In Hierarchical inheritance, more than one subclass is inherited from a single base class.
   ie: more than one derived class is created from a single base class.
*/

class Shape{
public:
    virtual void draw() = 0;
};

class Triangle : public Shape{
public:
    void draw() override {
        std::cout << "Drawing a triangle." << std::endl;
    }
};

class Square : public Shape{
public:
    void draw() override{
        std::cout << "Drawing a square." << std::endl;
    }
};

int main(){

    Triangle triangle;      // Create Triangle object directly
    Square square;          // Create Square object directly

    triangle.draw();
    square.draw();

    return 0;
}
