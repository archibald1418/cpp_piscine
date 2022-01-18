#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const Animal *dog = new Dog();
    // const Animal *cat = new Cat();

    const int size = 42;
    Animal *pets[size];

    int i = 0;
    while (i < size / 2)
        pets[i++] = new Dog();
    while (i < size)
        pets[i++] = new Cat();
    for (int i = 0; i < size; i++)
    {
        pets[i]->think();
        delete pets[i];
    }

    
    
    
    // Dog *dog1 = new Dog();

    
    // dog->think();
    
    

    // delete dog; //should not create a leak
    // delete cat;
}