#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <fstream>
#include <unistd.h>

int main()
{
    // const Animal *dog = new Dog();
    // const Animal *cat = new Cat();
    
    std::ofstream brainlog("BrainLog.txt"); 

    const int size = 2;
    AAnimal *pets[size];

    int i = 0;
    while (i < size / 2)
    {
        pets[i] = new Dog();
        brainlog << "Dog brain at " << pets[i]->brain << std::endl;
        brainlog << "Dog ideas at " << pets[i]->brain->ideas << std::endl;
        i++;
    }
    while (i < size)
    {
        pets[i] = new Cat();
        
        brainlog << "Cat brain at " << pets[i]->brain << std::endl;
        brainlog << "Cat ideas at " << pets[i]->brain->ideas << std::endl;
        i++;
    }

    //
    // ------- RAISES COMPILE ERROR ------
    // Animal copy = *pets[i];
    // 
    for (int i = 0; i < size; i++)
    {
        AAnimal *copy = pets[i]->clone();

        brainlog << copy->getType() + " copy brain at " << copy->brain << std::endl;
        brainlog << copy->getType() + " copy ideas at " << copy->brain->ideas << std::endl;

        std::cout << pets[i]->getType() + " source thinks" << std::endl;
        pets[i]->think();
        std::cout << copy->getType() + " copy thinks" << std::endl;
        copy->think();

        delete pets[i];
        delete copy;
        copy = NULL;
    }
    brainlog.close();


    
    
    
    // Dog *dog1 = new Dog();

    
    // dog->think();
    
    

    // delete dog; //should not create a leak
    // delete cat;
}
