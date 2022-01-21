#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "\tcure created" << std::endl;
}

Cure::~Cure()
{
    
}

Cure::Cure(const Cure& other)
{
    *this = other;
}

Cure& Cure::operator=(const Cure& other)
{
    AMateria::operator=(other);
    return (*this);
}

Cure*   Cure::clone()const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "\'s wounds * " << std::endl;
}



