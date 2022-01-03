#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>


class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);
    Zombie ();
    ~Zombie();
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif