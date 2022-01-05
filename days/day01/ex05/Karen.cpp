#include "Karen.hpp"
#include <iostream>
#include <string>



Karen::Karen()
{
    this->complaints[0] = &Karen::debug;
    this->complaints[1] = &Karen::warning;
    this->complaints[2] = &Karen::info;
    this->complaints[3] = &Karen::error;
}

Karen::~Karen()
{
    ;
}


void    Karen::debug()
{
    std::cout <<  "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!" << std::endl;
}

void    Karen::info()
{
    std::cout << "I cannot believe adding extra \
bacon cost more money. You don’t put enough! \
If you did I would not have to ask for it!" << std::endl;

}

void    Karen::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. \
I’ve been coming here for years and you \
just started working here last month." << std::endl;
}

void    Karen::error()
{
    std::cout << "This is unacceptable, \
I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    int i = 0;

    while (levels[i] != level)
        i++;

    (this->*complaints[i])();
}

std::string Karen::levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};