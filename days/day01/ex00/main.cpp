#include "Zombie.hpp"

int main()
{
    Zombie stack = Zombie("stack");
    Zombie *heap = newZombie("HEAP");
    randomChump("Chump");
    
    Zombie *zombieHoard = new Zombie[42]; // Default constructor Zombie() is required

    // Deallocate with delete
    delete heap; // Calls destructor of the object
    delete [] zombieHoard;
    // delete &stack; // Pointer being freed was not allocated

    // NOTE: Zaz: 'References are like a non-void constant'
}