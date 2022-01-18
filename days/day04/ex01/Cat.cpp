#include "Cat.hpp"
#include "Animal.hpp"

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

Cat::Cat (const Cat& cat)
{
    *this = cat;
}

Cat& Cat::operator=(const Cat& other)
{
    Animal::operator=(other);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Meoooowwwwwwwwww " << std::endl;
}