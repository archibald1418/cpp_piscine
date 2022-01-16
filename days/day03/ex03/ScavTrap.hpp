#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"
# include <iostream>


class ScavTrap :  public virtual ClapTrap
{

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);

        ~ScavTrap();
        void    guardGate();
        void    announce();
        int     getEnergyPoints(void);
};



#endif
