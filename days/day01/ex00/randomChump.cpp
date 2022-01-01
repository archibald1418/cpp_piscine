#include "Zombie.hpp"
#include <iostream>
#include <string>

void    randomChump(std::string name)
{
    Zombie *zombie;

    zombie = newZombie(name);
    if (!zombie)
        return ;
    zombie->announce();
    delete zombie; // No leaks
}