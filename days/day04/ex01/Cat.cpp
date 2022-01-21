#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    this->brain->setIdeas("🐱");
}

Cat::~Cat()
{
    if (this->brain)
    {
        delete this->brain;
        this->brain = NULL;
        std::cout << "Animal brain killed" << std::endl;
    }
    else
        std::cout << "I have no brain I'm stupid" << std::endl;
    std::cout << "Cat killed" << std::endl;
}

Cat::Cat (const Cat& other)
{
    *this = other;
    std::cout << "Cat copoied" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
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

void    Cat::makeSound(void)const
{
    std::cout << "Meoooowwwwwwwwww " << std::endl;
}

Brain*  Cat::getBrain()const
{
    return (this->brain);
}

void    Cat::think()const
{
    if (this->brain)
        this->brain->think();
}

Cat*    Cat::clone()
{
    return (new Cat(*this));
}
