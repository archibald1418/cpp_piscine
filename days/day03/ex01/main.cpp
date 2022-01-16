#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    ScavTrap kek("yo mama");
    ScavTrap kkk("yo daddy");

    ScavTrap lol(kek);
    lol.announce();
    
    kkk.announce();
    kek.announce();
    kkk = kek;

    kkk.announce();
    kek.announce();

}