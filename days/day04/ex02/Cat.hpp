#ifndef CAT_H
# define CAT_H
#include <iostream>
#include "AAnimal.hpp"

class Cat : public virtual AAnimal
{
    
public:
    Cat();
    ~Cat();
    Cat (const Cat& cat);
    Cat& operator=(const Cat& other);
    void makeSound(void)const;
    virtual Cat*    clone();
    
    
};



#endif
