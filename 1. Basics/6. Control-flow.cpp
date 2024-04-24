import <iostream>;
#include "BasicsHeader.h"

/*
    The C++ break is used to break loop or switch statement. It breaks the current
    flow of the program at the given condition.
*/

void Break_statement() {
    for (int i = 1; i <= 10; i++){
        if (i == 5)
        {
            break;
        }
        std::cout << i << "\n";
    }
}

/*
    The C++ continue statement is used to continue loop. It continues the current flow of 
    the program and skips the remaining code at specified condition.
*/

void Continue_statement(){
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        std::cout << i << "\n";
    }
}

/*
    The C++ goto statement is also known as jump statement. It is used to transfer control 
    to the other part of the program. It unconditionally jumps to the specified label.
*/

void Goto_statement(){
    ineligible:
        std::cout << "You are not eligible to vote!\n";
        std::cout << "Enter your age:\n";
    int age{};
    std::cin >> age;
    if (age < 18){
        goto ineligible;
    }
    else{
        std::cout << "You are eligible to vote!";
    }
}