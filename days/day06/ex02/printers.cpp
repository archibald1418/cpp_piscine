#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Base& base)
{
    (void)base;
    os << "Base" << std::endl;
    return (os);
}
std::ostream& operator<<(std::ostream& os, const A& a)
{
    (void)a;
    os << "A" << std::endl;
    return (os);
}
std::ostream& operator<<(std::ostream& os, const B& b)
{ 
    (void)b;  
    os << "B" << std::endl;
    return (os);
}

std::ostream& operator<<(std::ostream& os, const C& c)
{
    (void)c;
    os << "C" << std::endl;
    return (os);
}