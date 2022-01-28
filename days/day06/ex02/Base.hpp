#ifndef BASE_H
# define BASE_H
#include <iostream>


class Base
{
    
public:
    virtual ~Base(){};

};


Base*   generate(void);
void    identify(Base* p);
void    identify(Base& p);

std::ostream& operator<<(std::ostream& os, const Base& base);

#endif