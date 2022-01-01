#include "Zombie.hpp"
#include <string>

Zombie  *newZombie(std::string name)
{
    return (new Zombie(name)); // Calls constructor of the object
}