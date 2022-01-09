#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ios>

// COPLIEN FORM
// Default constructor

// Bitmasks
#define BYTEMASK_ONE            0xff000000
#define BYTEMASK_TWO            0x00ff0000
#define BYTEMASK_THREE          0x0000ff00
#define BYTEMASK_FOUR           0x000000ff  

Fixed::Fixed()
{
    this->value = 0;
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor (Ctor)
Fixed::Fixed(const Fixed& other) : value(other.value)
{
/* Initializing an object with another object */
    std::cout << "Copy constructor called" << std::endl;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other)
{
/* Updating object's members with another object's */

    // Self assignemnt should do nothing
    if (this == &other)
        return (*this);

    /* 
    NOTE:
        Assignment by its nature destroys previous state 
    of the object. But member attributes and their states
    should be still copied into the new object.
        (std::copy helps with that)
        This is vital for dynamically allocated types, 
    since their memory usage patterns might differ drastically.
    Moreover, leaks will occur if an operator= overload is not
    done right. A copy-swap idiom helps to do that cleanly:
    https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom
        However, in this case we are merely using built-in types 
    on stack for our class so a regular assignment
    done on fields is enough.
    */

    this->value = other.value; // Update fields
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

// Destructor (Dtor)
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float f)
{
    this->value = convert(f);
    std::cout << ">>> " << std::setw(BITS + 1) <<\
        std::scientific << f << std::endl;
}

Fixed::Fixed(int n)
{
    this->value = convert(n);
    std::cout << ">>> " << n << std::endl;
}


std::string Fixed::toString(void)const
{
    return ("");
}

int Fixed::toInt(void)const
{
    
    return (0);
}

float   Fixed::toFloat(void)const
{
    
    return (0.0);
}


int Fixed::convert(int val)
{
    return (val << BITS);
}

int Fixed::convert(float val)
{
    return (static_cast<int>(roundf((1 << BITS) * val)));
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits function called" << std::endl;
    // std::cout << " >>> " << std::endl;
    std::cout <<\
    std::bitset<8>((BYTEMASK_ONE & this->value) >> 24) << ' ' <<\
    std::bitset<8>((BYTEMASK_TWO    & this->value) >> 16) << ' ' <<\
    std::bitset<8>((BYTEMASK_THREE  & this->value) >> 8) << ' ' <<\
    std::bitset<8>((BYTEMASK_FOUR   & this->value) >> 0) << " <- " << this->value << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)const
{
    (void)raw;
    
    std::cout << "setRawBits function called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Fixed& fixed)
{
    std::cout << fixed.toString();
    return (os);
}

const int Fixed::BITS = 8;

