// #include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main()
{      

    std::cout << " ==== Start =====" << std::endl;

    DiamondTrap diamond("diamond");

    diamond.announce();

    diamond.whoAmI();

    diamond.getInfo();

    std::string emerald("emerald");
    diamond.attack(emerald);
    diamond.guardGate();
    diamond.highFivesGuys();

    
    

    
}