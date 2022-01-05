#include "Zombie.hpp"
#include <iostream>
#include <string>

void    randomChump(std::string name)
{

    Zombie zombie = Zombie(name);
    zombie.announce();
    // destroyer
}