#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "\tIce created" << std::endl; 
}

Ice::~Ice()
{
    std::cout << "Ice destroyed" << std::endl;
}

Ice& Ice::operator=(const Ice& other)
{
    AMateria::operator=(other);
    return (*this);
}

Ice::Ice(const Ice& other)
{   
    *this = other;
}

Ice*    Ice::clone(void)const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}



