
#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <iostream>

class ICharacter;
# include "AMateria.hpp"

class ICharacter
{
    public:
        virtual ~ICharacter() {}
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
        // virtual void deleteInventory() = 0;
        // virtual void setInventory(AMateria*const* inventory) = 0;
        // virtual ICharacter* clone() = 0;
        
};

#endif