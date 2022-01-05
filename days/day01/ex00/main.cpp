#include "Zombie.hpp"

int main()
{
    Zombie stack = Zombie("stack");
    Zombie *heap = new Zombie("HEAP");
    randomChump("Chump");
    

    // Deallocate with delete
    delete heap; // Calls destructor of the object
    // delete &stack; // Pointer being freed was not allocated

}