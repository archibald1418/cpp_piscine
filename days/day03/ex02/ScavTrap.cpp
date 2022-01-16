#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name) : 
    ClapTrap(name,
            100,
            50,
            20)
{
    std::cout << "ScavTrap built ok" << std::endl;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Destroyed" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) //ClapTrap(other._name, other._hitPoints, other._energyPoints, other._attackDamage)
{
    std::cout << "ScavTrap copied" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignment " << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode " << std::endl;
}

void    ScavTrap::announce()
{
    std::cout << "ScavTrap " << _name << std::endl;
}