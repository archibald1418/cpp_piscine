#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : 
    ClapTrap(name, 
            100, 
            100, 
            30)
{
    std::cout << "FragTrap " << _name << " built ok" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap assignment " << std::endl;
    ClapTrap::operator=(other);
    return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copied" << std::endl;   
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " high fives you ";
    std::cout << " ^_^/ \\^_^ " << std::endl;
}