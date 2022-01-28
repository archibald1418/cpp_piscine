#ifndef B_H
# define B_H

class Base;
#include "Base.hpp"

class B : public Base
{
    
};

std::ostream& operator<<(std::ostream& os, const B& b);
#endif