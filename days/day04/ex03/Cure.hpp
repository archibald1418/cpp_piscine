#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : virtual public AMateria
{
    private:
public:
    Cure(const Cure& other);
    ~Cure();
    Cure();
    Cure& operator=(const Cure& other);

    void    use(ICharacter& target);
    Cure*   clone(void)const;
    

    
};


#endif