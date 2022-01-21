#include "utils.hpp"
#include "Character.hpp"


Character::Character(std::string name) : name(name)
{
    for (int i = 0; i < SIZE; i++)
        this->inventory[i] = NULL;
}

Character::~Character()
{
    this->deleteInventory();
}

void    Character::deleteInventory()
{
    
    for (int i = 0; i < SIZE; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = NULL;
    }
}

void    Character::setInventory(AMateria*const* inventory) // field of const object is also const
{
    for (int i = 0; i < SIZE; i++)
    {
        delete this->inventory[i];
        this->inventory[i] = inventory[i]; // replace pointers
    }
}


Character::Character(const Character& other)
{
    *this = other;
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return (*this);
    
    this->name = other.name;
    setInventory(other.inventory);
    return (*this);
}

const std::string&    Character::getName()const
{
    return (this->name);
}

void    Character::use(int idx, ICharacter& target)
{
    
    if (idx >= SIZE)
        return (print_msg("Index too big"));

    AMateria* m = this->inventory[idx];
    if (m == NULL)
        return (print_msg("No such materia. Try another index"));
    m->use(target);
    this->unequip(idx);
}

void    Character::unequip(int idx)
{
    if (idx >= SIZE)
        return (print_msg("Index too big"));
    std::cout << "Ice unequipped from inventory" << std::endl;
    this->inventory[idx] = NULL;
}

void    Character::equip(AMateria *m)
{
    int i = 0;
    while (i < SIZE && this->inventory[i])
        i++;
    if (i == SIZE)
        return (print_msg("Inventory is full"));
    this->inventory[i] = m;
}


Character* Character::clone()
{
    return (new Character(*this));
}