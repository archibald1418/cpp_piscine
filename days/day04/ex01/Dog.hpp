# include <iostream>
# include "Animal.hpp"

# ifndef DOG_H
# define DOG_H

class Dog : public virtual Animal
{
    private:
        Brain *brain;
        std::string type;
    public:
        Dog();
        ~Dog();
        Dog (const Dog& dog);
        Dog& operator=(const Dog& other);
        void makeSound(void)const;
        Brain*  getBrain()const;
        void    think()const;
        Dog*    clone();
};

#endif

