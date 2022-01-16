#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{      

    std::cout << " ==== Start =====" << std::endl;

    ScavTrap kek("yo mama");
    ScavTrap kkk("yo daddy");

    ScavTrap lol(kek);
    lol.announce();
    
    kkk.announce();
    kek.announce();

    kkk = kek;

    kkk.announce();
    kek.announce();
    
    FragTrap five("five");
    FragTrap six("six");

    five.highFivesGuys();
    six.highFivesGuys();

    five = six;

    five.highFivesGuys();
    six.highFivesGuys();



}