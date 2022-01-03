#include "Zombie.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
    
    Zombie *zombies;

    const int N = 10;
    const std::string name = "KEK";

    zombies = zombieHorde(N, name);

    // Hoarde, announce   
    int i = 0;
    std::cout << "Horde " << name << ", Announce!" << std::endl;
    while (i < N)
    {
        zombies[i].announce();
        i++;
    }

    // Deallocate with delete
    delete [] zombies;
    // delete &stack; // Pointer being freed was not allocated

}