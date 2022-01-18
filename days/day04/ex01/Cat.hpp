#ifndef CAT_H
# define CAT_H
#include <iostream>
#include "Animal.hpp"

class Cat : public virtual Animal
{
    
public:
    Cat();
    ~Cat();
    Cat (const Cat& cat);
    Cat& operator=(const Cat& other);
    void makeSound(void)const;
    
};



#endif