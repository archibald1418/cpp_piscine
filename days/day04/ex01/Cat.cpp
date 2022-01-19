#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    this->brain->setIdeas("🐱");
}

Cat::~Cat()
{
    std::cout << "Cat killed" << std::endl;
}

Cat::Cat (const Cat& cat) : Animal(cat)
{
    std::cout << "Cat copoied" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Meoooowwwwwwwwww " << std::endl;
}