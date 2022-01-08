#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>

// COPLIEN FORM
// Default constructor
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
    std::cout << "Assignation operator called" << std::endl;
    return (*this);
}

// Destructor (Dtor)
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(float f)
{
    //TODO: init fp from float : "ctor(52.234) => 52.234, calc fp, set this->value to fp form"
    this->value = 0;
    (void)f;
}

Fixed::Fixed(int n)
{
    //TODO: init fp from int : "ctor(5) => 5.0000000, calc fp, set this->value to fp form"
    this->value = 0;
    (void)n;
}


std::string Fixed::toString(void)const
{
    return (convert(this->value));
}

int Fixed::toInt(void)const
{
    return (0);
}

float   Fixed::toFloat(void)const
{
    return (0.0);
}

std::string Fixed::convert(int val)
{
    (void)val;
    std::string bits(BITS, '0');
    return (bits);
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits function called" << std::endl;
    return (0);
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

