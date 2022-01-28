#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <time.h>
#include <limits>

enum children{
    a = 0,
    b = 1,
    c = 2
} children;




Base*   generate(void)
{
    std::srand(time(NULL));

    int index = rand() % 3;

    Base *obj = NULL;
    
    if (index == a)
    {        
        obj = new A();
        std::cerr << "*A случайно выбран*\n";
    }
    else if (index == b)
    {
        obj = new B();
        std::cerr << "*B случайно выбран*\n";
    }
    else if (index == c)
    {    
        obj = new C(); 
        std::cerr << "*C случайно выбран*\n";
    }
    else
        std::cerr << "Unknown index";
    
    return (obj);
}