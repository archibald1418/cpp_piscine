#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <exception>

void identify(Base* p)
{
    std::cout << *p;
}

void identify(Base& p)
{
    // Dynamic cast returns null pointer if a class was guessed wrong
    // In case of references , throws std::bad_cast

    // TODO: try array of references

    try{
        std::cout << dynamic_cast<A&>(p);
        return ;
    }
    catch(std::exception){
        std::cout << "Лах! Это не А!" << std::endl;
    }
    try{
        std::cout << dynamic_cast<B&>(p);
        return ;
    }
    catch(std::exception){
        std::cout << "Лах! Это не B!" << std::endl;
    }
    try{
        std::cout << dynamic_cast<C&>(p);
        return ;
    }
    catch(std::exception){
        std::cout << "Лах! Это не C!" << std::endl;
    }
    std::cout << "Ну ты лошара, не угадал!" << std::endl;
}