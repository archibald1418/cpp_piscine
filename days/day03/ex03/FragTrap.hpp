#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap& operator=(const FragTrap& other);
        FragTrap (const FragTrap& other);
        
        // Public getter for ClapTrap::Name
        std::string    getClapTrapName(void);
        int     getAttackDamage(void);
        int     getHitPoints(void);
        

        void    highFivesGuys(void);
        
};


#endif


