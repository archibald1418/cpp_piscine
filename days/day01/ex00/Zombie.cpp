#include "Zombie.hpp"
# include <iostream>
# include <iomanip>
# include <string>

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    this->name = "nameless";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << "'" + this->name + "'" << " is dead (or is he?)" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ.." << std::endl;
}




