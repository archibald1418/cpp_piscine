#include "Cat.hpp"
#include "AAnimal.hpp"

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

Cat::Cat (const Cat& cat) : AAnimal(cat)
{
    std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this == &other)
        return (*this);
    AAnimal::operator=(other);
    return (*this);
}

void    Cat::makeSound(void)const
{
    std::cout << "Meoooowwwwwwwwww " << std::endl;
}

Cat*    Cat::clone()
{
    return (new Cat());
}