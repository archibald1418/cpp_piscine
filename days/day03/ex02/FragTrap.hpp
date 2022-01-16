#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    FragTrap& operator=(const FragTrap& other);
    FragTrap (const FragTrap& other);

    void    highFivesGuys(void);
    
};


#endif


