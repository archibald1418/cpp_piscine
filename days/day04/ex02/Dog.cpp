#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    this->brain->setIdeas("👅");
}
Dog::~Dog()
{
    std::cout << "Dog killed" << std::endl;
}
Dog::Dog (const Dog& dog) : AAnimal(dog)
{
    std::cout << "Dog copied" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return (*this);
    AAnimal::operator=(other);
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Woof you've picked the wrong house fool!" << std::endl;
}

Dog*    Dog::clone()
{
    return (new Dog());
}