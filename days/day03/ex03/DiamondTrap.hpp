#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
// # include "ClapTrap.hpp"
# include <iostream>

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
    private:
        std::string name;

        
public:
    DiamondTrap(std::string name);
    ~DiamondTrap();
    void    whoAmI();
    void    getInfo();
};




#endif