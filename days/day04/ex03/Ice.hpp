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
    Ice& operator=(const Ice& other);

    void    use(ICharacter& target);
    Ice*    clone(void)const;
    
    
};



#endif