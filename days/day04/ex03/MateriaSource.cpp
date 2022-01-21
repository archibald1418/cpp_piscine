#include "MateriaSource.hpp"
#include "utils.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < SIZE; i++)
        this->sources[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    this->deleteSources();
}

MateriaSource::MateriaSource (const MateriaSource& other)
{
    *this = other;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this == &other)
        return (*this);
    setSources(other.sources);
    return (*this);
}

void    MateriaSource::setSources(AMateria* const* inventory)
{
    for (int i = 0; i < SIZE; i++)
        this->sources[i] = inventory[i];
}

void    MateriaSource::deleteSources()
{
    for (int i =0; i < SIZE; i++)
    {
        delete this->sources[i];
        this->sources[i] = NULL;
    }
}

void    MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (i < SIZE && this->sources[i])
        i++;
    if (i == SIZE)
        return (print_msg("Sources are full"));
    this->sources[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < SIZE)
    {
        if (this->sources[i] &&\
            this->sources[i]->getType() == type)
            break;
        i++;
    }
    if (i == SIZE)
    {
        std::cout << "No amateria type found" << std::endl;
        return (NULL);
    }
    return this->sources[i]->clone();
}