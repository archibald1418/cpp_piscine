#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "cure creted" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
}

Cure& Cure::operator=(const Cure& other)
{
    AMateria::operator=(other);
    return (*this);
}