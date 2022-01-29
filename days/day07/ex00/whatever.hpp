#ifndef WHATEVER_H
# define WHATEVER_H

template< typename T >
const T& max(const T& x, const T& y)
{
    if (x > y)
        return (x);
    return (y);
};

template< typename T >
const T& min(const T& x, const T& y)
{
    if (x < y)
        return (x);
    return (y);
};

template< typename T>
void    swap(T& x, T& y)
{
    const T tmp = x;
    x = y;
    y = tmp;
};


#endif




