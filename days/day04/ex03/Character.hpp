#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "AMateria.hpp"
# include "utils.hpp"
# ifndef SIZE
#  define SIZE 4
# endif

class Character : virtual public ICharacter
{
private:
    std::string name;
    AMateria* inventory[SIZE];
public:
    Character(std::string name);
    ~Character();
    Character(const Character& other);
    Character& operator=(const Character& other);
    virtual const std::string&  getName()const;
    virtual void    deleteInventory();
    virtual void    setInventory(AMateria *const*inventory);
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    virtual Character* clone();
};


#endif