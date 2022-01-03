#include "Zombie.hpp"



Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie;
    int i;

    if (!zombie)
        return (NULL);

    i = 0;
    while (i < N)
    {
        zombie[i] = Zombie(name); // Copying
        i++;
    }
    return (zombie); 
    
}