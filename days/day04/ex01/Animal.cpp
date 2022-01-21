#include "Animal.hpp"
#include "Brain.hpp"

Animal::Animal()
{
    this->type = "";
}
Animal::~Animal()
{
}
Animal::Animal (const Animal& animal)
{
    *this = animal;
}
Animal& Animal::operator=(const Animal& other)
{
    if (this == &other) // Should probably write comparison operator for fields as well
        return (*this);
    
    this->type = other.type;
    // if (!other.brain)
    //     return (*this);
    // if (this->brain)
    //     delete this->brain;
    // this->brain = other.brain->clone();
    return (*this);
}

std::string Animal::getType()const
{
    return (this->type);
}

// void Animal::think(void)const
// {
    
// }

// void    Animal::makeSound()const
// {
//     ;
// }

// Brain*    Animal::getBrain()const
// {
//     return (NULL);
// }

// Animal*  Animal::clone()
// {
//     return (NULL);
// }