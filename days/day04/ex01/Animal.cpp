#include "Animal.hpp"

Animal::Animal()
{
    ;
}
Animal::~Animal()
{
    ;
}
Animal::Animal (const Animal& animal)
{
    *this = animal;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this == &other)
        return (*this);
    
    this->type = other.type;
    return (*this);
}


