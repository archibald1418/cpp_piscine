#ifndef A_H
# define A_H

class Base;
#include "Base.hpp"

class A : public Base
{
    
};

std::ostream& operator<<(std::ostream& os, const A& a);

#endif