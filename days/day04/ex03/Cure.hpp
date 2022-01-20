#ifndef CURE_H
# define CURE_H

#include "AMateria.hpp"

class Cure : virtual public AMateria
{
public:
    Cure();
    Cure(const Cure& other);
    ~Cure();

    void    use(ICharacter& target);
    Cure*   clone();
    

    
};


#endif