#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <fstream>

int main()
{
    // const Animal *dog = new Dog();
    // const Animal *cat = new Cat();
    
    std::ofstream brainlog("BrainLog.txt");

    const int size = 4;
    Animal *pets[size];

    int i = 0;
    while (i < size / 2)
    {
        pets[i] = new Dog();
        brainlog << "Dog at" << pets[i] << std::endl;
        brainlog << "Dog brain at " << pets[i]->getBrain() << std::endl;
        brainlog << "Dog ideas at " << pets[i]->getBrain()->getIdeas() << std::endl;
        i++;
    }
    while (i < size)
    {
        pets[i] = new Cat();
        
        brainlog << "Cat at" << pets[i] << std::endl;
        brainlog << "Cat brain at " << pets[i]->getBrain() << std::endl;
        brainlog << "Cat ideas at " << pets[i]->getBrain()->getIdeas() << std::endl;
        i++;
    }

    Animal *copies[size];
    for (int i = 0; i < size; i++)
    {
        Animal *copy = pets[i]->clone();
        // *copy = *pets[i];         // Tehcnicaly it's a deepcopy (=new object with cloned insides) 
        copies[i] = copy;

        brainlog << copy->getType() + " copy at " << copy << std::endl;
        brainlog << "Animal copy brain at " << copy->getBrain() << std::endl;
        brainlog << "Animal copy ideas at " << copy->getBrain()->getIdeas() << std::endl;
        
        std::cout << pets[i]->getType() + " source thinks" << std::endl;
        pets[i]->think();
        std::cout << copy->getType() + " copy thinks" << std::endl;
        copy->think();
    }

    // Delete  all
    for (int i = 0; i < size; i++)
    {
        delete pets[i];
        delete copies[i];
    }
    brainlog.close();
    // Dog *dog1 = new Dog();

    
    // dog->think();
    
    

    // delete dog; //should not create a leak
    // delete cat;
}