#include "Zombie.hpp"



Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie;
    int i;

    zombie = new Zombie[N](); // In a single allocation
    if (!zombie)
        return (NULL);

    i = 0;
    while (i < N)
    {
        zombie[i] = Zombie(name); // Copying
        i++;
    }
    return (zombie); 

    /*
        They are zombies! That's why they die first - to be reborn!
    */
}