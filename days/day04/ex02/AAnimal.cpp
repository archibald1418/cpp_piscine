#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal()
{
    this->type = "";
}
AAnimal::~AAnimal()
{
}
AAnimal::AAnimal (const AAnimal& animal)
{
    *this = animal;
}
AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this == &other)
        return (*this);
    
    this->type = other.type;
    return (*this);
}

std::string AAnimal::getType()const
{
    return (this->type);
}