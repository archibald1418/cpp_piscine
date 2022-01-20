# include <iostream>
# include "AAnimal.hpp"

# ifndef DOG_H
# define DOG_H

class Dog : public virtual AAnimal
{
public:
    Dog();
    ~Dog();
    Dog (const Dog& dog);
    Dog& operator=(const Dog& other);
    void makeSound(void)const;
    virtual Dog*    clone();
};

#endif

