#include "HumanB.hpp"
#include "Weapon.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}


HumanB::HumanB(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanB::~HumanB()
{
    ;
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}