#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack();
};



#endif