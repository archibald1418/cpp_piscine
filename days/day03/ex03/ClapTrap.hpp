#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

        static std::string Name; 
        static void initName(std::string);
        // For derived objects
        ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

    public:
        ClapTrap(std::string name);
        ClapTrap();
        ~ClapTrap();
        ClapTrap& operator=(const ClapTrap& other);
        ClapTrap (const ClapTrap& other);

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



#endif