#include <iostream>
#include "Animal.hpp"

class Cat : Animal
{
    
public:
    Cat();
    ~Cat();
    Cat (const Cat& cat);
    Cat& operator=(const Cat& other);
    virtual void makeSound(void);
    
};



