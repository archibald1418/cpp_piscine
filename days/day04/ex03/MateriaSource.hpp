#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#define SIZE 4

class MateriaSource : virtual public IMateriaSource
{
private:
    AMateria *sources[SIZE]; // pointer cash for materia to be cloned later
public:
    void    deleteSources();
    void    setSources(AMateria* const* sources);
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    AMateria* createMateria(std::string const & type);
    void    learnMateria(AMateria *m);
    

    
};


#endif