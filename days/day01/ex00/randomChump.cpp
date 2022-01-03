#include "Zombie.hpp"
#include <iostream>
#include <string>

void    randomChump(std::string name)
{
    // HEAD 
    // Zombie *zombie;

    // zombie = newZombie(name);
    // if (!zombie)
    //     return ;
    // zombie->announce();
    // delete zombie; // No leaks

    Zombie zombie = Zombie(name);
    // destroyer
}