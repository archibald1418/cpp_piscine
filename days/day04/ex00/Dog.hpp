#include <iostream>
#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

class Dog : public virtual Animal
{
public:
    Dog();
    ~Dog();
    Dog (const Dog& dog);
    Dog& operator=(const Dog& other);
    virtual void makeSound(void);
};

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

void    Dog::makeSound(void)
{
    std::cout << "Woof you've picked the wrong house fool!" << std::endl;
}




#endif

