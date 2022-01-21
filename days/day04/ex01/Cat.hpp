#ifndef CAT_H
# define CAT_H
#include <iostream>
#include "Animal.hpp"

class Cat : public virtual Animal
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
