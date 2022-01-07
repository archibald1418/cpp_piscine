#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(int width, int pos)
{
    (void)width;
    (void)pos;
    // TODO: write init
    value = 0; 
}

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy contructor called" << std::endl;
    this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    Fixed newFixed(other);

    std::cout << "Assignation operator called" << std::endl;
    return (*this);
    
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

const int Fixed::BITS = 8;