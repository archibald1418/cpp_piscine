#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->brain = NULL;
    this->type = "";
}
AAnimal::~AAnimal()
{
    if (this->brain)
    {
        delete this->brain;
        std::cout << "Animal brain killed" << std::endl;
    }
    else
        std::cout << "I have no brain I'm stupid" << std::endl;
}
AAnimal::AAnimal (const AAnimal& animal)
{
    *this = animal;
}
AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this == &other) // Should probably write comparison operator for fields as well
        return (*this);
    
    this->type = other.type; // NOTE: highlights overloaded operators
    if (!other.brain)
        return (*this);
    if (this->brain)
    {
        delete this->brain;
        this->brain = NULL;
    }
    this->brain = other.brain->clone();
    return (*this);
}

std::string AAnimal::getType()const
{
    return (this->type);
}

void AAnimal::think(void)const
{
    this->brain->think();
}