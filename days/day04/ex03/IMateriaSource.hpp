#ifndef IMATERIASOURCE_H
# define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
    public:
        virtual ~IMateriaSource() {}
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
        
        virtual void    setSources(AMateria* const* sources) = 0;
        virtual void    deleteSources() = 0;
};

#endif