#ifndef CAT_H
# define CAT_H
#include <iostream>
#include "AAnimal.hpp"

class Cat : public virtual AAnimal
{
    private:
        Brain* brain;
    
    public:
        Cat();
        ~Cat();
        Cat (const Cat& caothert);
        Cat& operator=(const Cat& other);
        void makeSound(void)const;
        Brain*  getBrain()const;
        void    think()const;
        Cat*    clone();
    
};



#endif
