#include <iostream>
#include "prime.h"

void myFunction1()
{
    std::cout << "This is myFunction1." << std::endl;
}

double square(double x)
{

    return x*x;
}

void print_square(double x)
{
    std::cout << "the square of " << x << " is " << square(x) << std::endl;
}

int main()
{
    myFunction1();

    std::cout << "Hello World!" << std::endl;
    print_square(1.234);
    
    return 0;
}