#include "Animal.hpp"

Animal::Animal()
{
    this->brain = NULL;
    this->type = "";
}
Animal::~Animal()
{
    delete this->brain;
    std::cout << "Animal brain killed" << std::endl;
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
    if (this->brain)
        this->brain = other.brain;
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