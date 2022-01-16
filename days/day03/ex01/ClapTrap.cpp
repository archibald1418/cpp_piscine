#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap() : _name(""), 
    _hitPoints(0), _energyPoints(0), _attackDamage(0)
{
    std::cout << "default ClapTrap built ok" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), 
    _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : 
    _name(name), _hitPoints(hitPoints), _energyPoints(energyPoints), _attackDamage(attackDamage)
{
    std::cout << "protected ClapTrap built ok" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), 
    _hitPoints(other._hitPoints), 
    _energyPoints(other._attackDamage), 
    _attackDamage(other._attackDamage)
{
    std::cout << "ClapTrap copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this == &other)
        return (*this);
    std::cout << "ClapTrap assignment" << std::endl;
    std::cout << (*this);
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
    return (*this);
}


void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attacks " << target <<\
        " causing " << this->_attackDamage << " points of damage" << std::endl;
        
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " takes " << amount <<\
        " points of damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " repairs " << amount <<\
        " points " << std::endl;
}        

std::string ClapTrap::getName()const
{
    return (this->_name);
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& claptrap)
{
    std::cout << "claptrap name = " << claptrap.getName() << " at " << &claptrap <<  std::endl;
    return (os);
}