#include "Test.class.hpp"
#include <iostream>

int main()
{
    Witch instance;
    std::cout << "-------------------------" << std::endl;
    
    std::cout << "==aura is " << instance.foo << std::endl;

    instance.laugh();

    std::cout << "==aura is " << instance.foo << std::endl;

    return (0);
}