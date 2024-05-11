import <iostream>;
#include "MemoryHeader.h"

int Dynamic(){

    // Pointer initialization to null
    int* p{};

    // Request memory for the variable
    // using new operator
    p = new int;
    if (!p)
        std::cout << "allocation of memory failed\n";
    else {
        // Store value at allocated address
        *p = 29;
        std::cout << "Value of p: " << *p << std::endl;
    }

    // Request block of memory
    // using new operator
    float* r = new float(75.25);

    std::cout << "Value of r: " << *r << std::endl;

    // Request block of memory of size n
    int n = 5;
    int* q = new int[n];

    if (!q)
        std::cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < n; i++)
            q[i] = i + 1;

        std::cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            std::cout << q[i] << " ";
    }

    // freed the allocated memory
    delete p;
    delete r;

    // freed the block of allocated memory
    delete[] q;

    return 0;
}