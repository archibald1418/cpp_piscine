#include <iostream>

template< typename T>
void iter(T* arrayPointer , int size , void (*f)(T &))
{
    for (int i = 0; i < size; i++)
        f(arrayPointer[i]);
}

void    stringAddExcl(std::string &s)
{
    s += '!';
}

void    initSquare(int &n)
{
    n *= n;
}

void    initSquare(float &f)
{
    f *= f;
}

void    initSquare(double &f)
{
    f *= f;
}