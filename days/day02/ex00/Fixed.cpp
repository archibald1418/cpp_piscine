#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy contructor called" << std::endl;
    this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this == &other)
        return (*this);
    
    this->value = other.value;

    std::cout << "Assignation operator called" << std::endl;
    return (*this);
    
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits()const
{
    std::cout << "getRawBits function called" << std::endl;
    return (0);
}

void    Fixed::setRawBits(int const raw)
{
    (void)raw;
    
    std::cout << "setRawBits function called" << std::endl;
}

const int Fixed::BITS = 8;