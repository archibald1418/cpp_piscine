#ifndef Ice_H
# define Ice_H

#include "AMateria.hpp"

class Ice : virtual public AMateria
{
private:
    std::string type;
public:
    Ice();
    Ice(const Ice& other);
    ~Ice();

    void    use(ICharacter& target);
    
    
};



#endif