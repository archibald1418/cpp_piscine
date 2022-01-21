#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    this->brain->setIdeas("👅");
}
Dog::~Dog()
{
    if (this->brain)
    {
        delete this->brain;
        this->brain = NULL;
        std::cout << "Animal brain killed" << std::endl;
    }
    else
        std::cout << "I have no brain I'm stupid" << std::endl;
    std::cout << "Dog killed" << std::endl;
}
Dog::Dog (const Dog& other)
{
    *this = other;
    std::cout << "Dog copied" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    if (!other.brain)
        return (*this);
    if (this->brain)
        delete this->brain;
    this->brain = other.brain->clone();
    return (*this);
}

void    Dog::makeSound(void)const
{
    std::cout << "Woof you've picked the wrong house fool!" << std::endl;
}

Brain*  Dog::getBrain()const
{
    return (this->brain);
}

void    Dog::think()const
{
    if (this->brain)
        this->brain->think();
}

Dog*    Dog::clone()
{
    return (new Dog(*this));
}