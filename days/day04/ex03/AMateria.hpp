
#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>

class AMateria;
#include "ICharacter.hpp"


class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria &other);
        virtual ~AMateria();
        // [...]
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0; // Deep copy
        virtual void use(ICharacter& target) = 0;
};

#endif