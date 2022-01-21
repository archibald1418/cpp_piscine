#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "Materia" + type + " created" << std::endl;
}

AMateria::AMateria()
{
    this->type = "";
}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return (*this);
    if (this->type == "")
        this->type = other.type;
    return (*this);
}

AMateria::~AMateria()
{
    ;
}


const std::string& AMateria::getType()const
{
    return (this->type);
}




