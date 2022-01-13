#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    ClapTrap kek("kek");
    ClapTrap lol(kek);
    ClapTrap nameless;
    
    ClapTrap a("a");
    ClapTrap b("b");

    a = b;

    kek.attack("lol");
    lol.takeDamage(42);

    lol.beRepaired(21);
}