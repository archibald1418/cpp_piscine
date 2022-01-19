#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
}

Cat::~Cat()
{
    
}

Cat::Cat (const Cat& cat) : Animal(cat)
{
    
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