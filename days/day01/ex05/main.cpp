#include "Karen.hpp"
#include <string>
#include <iostream>

void    show_level(std::string level)
{
    std::cout << "The level is " << level << std::endl;
}

int main()
{
    std::string level;
    Karen karen = Karen();

    level = "DEBUG";
    show_level(level);
    karen.complain(level);
    std::cout << std::endl;

    level = "INFO";
    show_level(level);
    karen.complain(level);
    std::cout << std::endl;

    level = "WARNING";
    show_level(level);
    karen.complain(level);
    std::cout << std::endl;

    level = "ERROR";
    show_level(level);
    karen.complain(level);
    std::cout << std::endl;
        
}