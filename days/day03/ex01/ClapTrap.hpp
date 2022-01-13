#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap
{
private:
    std::string name;
protected:
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap(std::string name);
    ClapTrap();
    ~ClapTrap();
    ClapTrap operator=(const ClapTrap& other);
    ClapTrap (const ClapTrap& other);

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};



#endif