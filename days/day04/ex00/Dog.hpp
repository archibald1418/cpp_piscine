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
    void makeSound(void)const;
};





#endif

