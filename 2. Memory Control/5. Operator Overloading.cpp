import <iostream>;
#include "MemoryHeader.h"

// C++ program to overload the binary operator +
// This program adds two complex numbers

class Complex{
private:
    float real{};
    float img{};

public:
    // constructor to initialize real and img to 0
    Complex() : real(0), img(0) {}
    Complex(float real, float img) : real(real), img(img) {}

    // overload the + operator
    friend Complex operator + (const Complex& obj1, const Complex& obj2){
        Complex temp;
        temp.real = obj1.real + obj2.real;
        temp.img = obj1.img + obj2.img;
        return temp;
    }

    void display(){
        if (img < 0)
            std::cout << "Output Complex number: " << real << img << "i";
        else
            std::cout << "Output Complex number: " << real << "+" << img << "i";
    }
};

int Overloading(){
    Complex c1(1.0f, 2.0f);
    Complex c2(1.0f, 3.0f);

    // calls the overloaded + operator
    Complex result = c1 + c2;
    result.display();

    return 0;
}