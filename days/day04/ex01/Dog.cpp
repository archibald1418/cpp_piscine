#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
}
Dog::~Dog()
{
    
}
Dog::Dog (const Dog& dog) : Animal(dog)
{
}
Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Woof you've picked the wrong house fool!" << std::endl;
}