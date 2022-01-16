#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap kek("kek");
    ScavTrap kkk("kkk");

    // ScavTrap lol(kek);
    // lol.announce();
    
    kkk.announce();
    kek.announce();
    
    kkk = kek;

    kkk.announce();
    kek.announce();

}