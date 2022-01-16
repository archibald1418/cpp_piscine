#include "DiamondTrap.hpp"

void    DiamondTrap::whoAmI()
{
    std::cout << "Diamond name is " << this->name << std::endl;
    std::cout << "ClapTrap name is " << this->getClapTrapName() << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    ScavTrap scav(name);
    FragTrap frag(name);
    
    this->name = name;
    initName(name);
    this->_energyPoints = scav.getEnergyPoints();
    this->_attackDamage = frag.getAttackDamage();
    this->_hitPoints = frag.getHitPoints();
    
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap killed" << std::endl;
}

void    DiamondTrap::getInfo()
{
    std::cout << "Energy points -> " << _energyPoints << std::endl <<\
        "Attack damage -> " << _attackDamage << std::endl <<\
            "Hit points -> " << _hitPoints << std::endl;
    
    this->whoAmI();

    
}