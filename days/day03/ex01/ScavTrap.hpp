#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap :  public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();
    void    attack(std::string &target);
    void    guardGate();
};



#endif
