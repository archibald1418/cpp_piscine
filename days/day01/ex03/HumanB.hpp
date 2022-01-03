#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"
# include <string>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB(std::string name);
    HumanB(std::string name, Weapon &weapon);
    ~HumanB();
    void attack();
    void    setWeapon(Weapon &weapon);
    
};


#endif