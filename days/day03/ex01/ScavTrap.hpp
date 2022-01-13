#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap : public ClapTrap
{
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void    attack(std::string &target);
};

// ScavTrap::ScavTrap(/* args */)
// {
// }

// ScavTrap::~ScavTrap()
// {
// }



#endif
