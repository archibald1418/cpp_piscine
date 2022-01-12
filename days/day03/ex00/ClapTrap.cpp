#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : name(""), 
    hitPoints(10), energyPoints(10), attackDamage(0)
{
}

ClapTrap::ClapTrap(std::string name) : name(name), 
    hitPoints(10), energyPoints(10), attackDamage(0)
{
    ;
}

ClapTrap::~ClapTrap()
{
    ;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), 
    hitPoints(other.hitPoints), energyPoints(other.attackDamage), attackDamage(other.attackDamage)
{
    // *this = other; NOTE: alternative form
}

ClapTrap ClapTrap::operator=(const ClapTrap& other)
{
    if (this == &other)
        return (*this);
    
    this->attackDamage = other.attackDamage;
    this->energyPoints = other.energyPoints;
    this->hitPoints = other.hitPoints;
    return (*this);
}


void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target <<\
        " causing " << this->attackDamage << " points of damage" << std::endl;
        
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount <<\
        " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " repairs " << amount <<\
        " points " << std::endl;
}        