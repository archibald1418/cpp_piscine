#ifndef C_H
# define C_H

class Base;
#include "Base.hpp"


class C : public Base
{
    
};

std::ostream& operator<<(std::ostream& os, const C& c);
#endif