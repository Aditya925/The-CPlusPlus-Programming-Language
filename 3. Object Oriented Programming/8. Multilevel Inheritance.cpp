import <iostream>;
#include "OopHeader.h"

// In Multilevel inheritance, a derived class is created from another derived class.

class Animal{
    public:
        void eat(){
            std::cout << "Animal is eating." << std::endl;
        }
};

class Mammal : public Animal{               // Mammal inherits from Animal
    public:
        void giveBirth(){
            std::cout << "Mammal is giving birth." << std::endl;
        }
};

class Dog : public Mammal{                  // Dog inherits from Mammal
    public:
        void bark(){
            std::cout << "Dog is barking." << std::endl;
        }
};

int Multilevel_Inheritance(){
    Dog d;
    d.eat();            // Inherited from Animal
    d.giveBirth();      // Inherited from Mammal
    d.bark();           // Specific to Dog

    return 0;
}