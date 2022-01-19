#include "Animal.hpp"

Animal::Animal()
{
    this->brain = NULL;
    this->type = "";
}
Animal::~Animal()
{
    if (this->brain)
    {
        delete this->brain;
        std::cout << "Animal brain killed" << std::endl;
    }
    else
        std::cout << "I have no brain I'm stupid" << std::endl;
}
Animal::Animal (const Animal& animal)
{
    *this = animal;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this == &other) // Should probably write comparison operator for fields as well
        return (*this);
    
    this->type = other.type; // NOTE: highlights overloaded operators
    if (!other.brain)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = other.brain->clone();
    return (*this);
}

std::string Animal::getType()const
{
    return (this->type);
}

void Animal::think(void)const
{
    this->brain->think();
}

void    Animal::makeSound()const
{
    ;
}
