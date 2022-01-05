#include "Karen.hpp"
#include <string>
#include <iostream>

void    show_level(std::string level)
{
    std::cout << "The level is " << level << std::endl;
}

void    display_info(int &level_index, Karen &karen)
{
    int i = level_index;

    while (i < NUM_LEVELS)
    {
        std::cout << "[ " + karen.levels[i] + " ]" << std::endl;
        karen.complain(karen.levels[i]);
        std::cout << std::endl;
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    std::string level = argv[1];
    Karen karen = Karen();

    int level_index = karen.getLevelIndex(level);
    switch (level_index)
    {
        case Debug:
        case Info:
        case Warning:
        case Error:
            display_info(level_index, karen);
            break;
        case Unknown:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

            
    }       
}