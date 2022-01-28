#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <cstdlib>
#include <time.h>

enum children{
    a,
    b,
    c
} children;


// TODO: try const array of references

Base*   generate(void)
{
    std::srand(time(NULL));

    int upper = 2;
    int lower = 0;
    int index = (std::rand() % (upper - lower ) + lower);

    Base *obj;

    switch (index)
    {
        case a:
            obj = new A();
        case b:
            obj = new B();
        case c:
            obj = new C();
    }
    return (obj);
}