#include "Fixed.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <ios>


// Bitmasks
#define BYTEMASK_ONE            0xff000000
#define BYTEMASK_TWO            0x00ff0000
#define BYTEMASK_THREE          0x0000ff00
#define BYTEMASK_FOUR           0x000000ff
#define BYTEMASK_PREFIX         0xffffff00

float   Fixed::abs(float x)
{
    if (x >= EPSILON)
        return (x);
    return (-x);
}

const int Fixed::BITS = 8;

// COPLIEN FORM
// Default constructor

Fixed::Fixed() : value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

// Copy constructor (Ctor)
Fixed::Fixed(const Fixed& other) : value(other.value)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Assignment operator
Fixed& Fixed::operator=(const Fixed& other)
{
    if (this == &other)
        return (*this);
    this->setRawBits(other.value);
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

// Destructor (Dtor)
Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
    this->setRawBits(this->convert(f));
}

Fixed::Fixed(const int n)
{
    this->setRawBits(this->convert(n));
}

// Comparisons
bool    Fixed::operator==(const Fixed& other)const
{
    return (abs(this->toFloat() - other.toFloat()) <= EPSILON);
}

bool Fixed::operator!=(const Fixed& other)const
{
    return (not (*this == other));
}

bool Fixed::operator>(const Fixed& other)const
{
    return (this->toFloat() - other.toFloat() > EPSILON);
}

bool Fixed::operator<(const Fixed& other)const
{
    return (this->toFloat() - other.toFloat() < -EPSILON);
}

bool Fixed::operator<=(const Fixed& other)const
{
    return ((*this == other) || (*this < other));
}

bool Fixed::operator>=(const Fixed& other)const
{
    return ((*this == other) || (*this > other));
}

Fixed& Fixed::operator+(const Fixed& other)
{
    float val = (this->toFloat() + other.toFloat());
    this->setRawBits(this->convert(static_cast<float>(val)));
    return (*this);

}

Fixed&  Fixed::operator-(int) // Unary minus
{
    this->setRawBits(-this->value);
    return (*this);
}

Fixed& Fixed::operator-(const Fixed& other)
{
    float val = (this->toFloat() - other.toFloat());
    this->setRawBits(this->convert(static_cast<float>(val)));
    return (*this);
}

Fixed& Fixed::operator-=(const Fixed& other)
{
    *this = *this - other;
    return (*this);
}

Fixed& Fixed::operator+=(const Fixed& other)
{
    *this = *this + other;
    return (*this);
}

Fixed& Fixed::operator++()
{
    *this += Fixed(EPSILON);
    return (*this);
}


Fixed& Fixed::operator++(int)
{
    *this += Fixed(EPSILON);
    return (*this);
}

Fixed& Fixed::operator--()
{
    *this -= Fixed(EPSILON);
    return (*this);
}

Fixed& Fixed::operator--(int)
{
    *this -= Fixed(EPSILON);
    return (*this);
}

Fixed& Fixed::operator*(const Fixed& other)
{
    float num = (this->toFloat() * other.toFloat()); 
    this->setRawBits(this->convert(static_cast<float>(num)));
    return (*this);
}

Fixed& Fixed::operator/(const Fixed& other)
{
    if (other == Fixed(0))
    {
        std::cout << "Division by zero" << std::endl;
        return (*this);
    }
            
    float val = this->toFloat() * (1.0f / other.toFloat());
    this->setRawBits(this->convert(val));
    return (*this);
}

const Fixed& Fixed::max(const Fixed& fixedA, const Fixed& fixedB)
{
    if (fixedA >= fixedB)
        return (fixedA);
    return (fixedB);
}

const Fixed& Fixed::min(const Fixed& fixedA, const Fixed& fixedB)
{
    if (fixedA <= fixedB)
        return (fixedA);
    return (fixedB);
}


int Fixed::toInt(void)const
{
    return (static_cast<int>(roundf(this->toFloat())));
}

float   Fixed::toFloat(void)const
{
    return ((static_cast<float>(this->value)) / static_cast<float>(1UL << BITS));
}

int Fixed::convert(int val)
{
    return (val << BITS);
}

int Fixed::convert(float val)
{
    return (static_cast<int>(roundf(static_cast<float>(1UL << BITS) * val)));
}

int Fixed::getRawBits()const
{
    // std::cout << "\ngetRawBits function called:" << std::endl;
    std::cout << ">>> " << this->toFloat() << std::endl;
    std::cout << ">>> " <<\
    std::bitset<8>((BYTEMASK_ONE    & this->value) >> 24) << ' ' <<\
    std::bitset<8>((BYTEMASK_TWO    & this->value) >> 16) << ' ' <<\
    std::bitset<8>((BYTEMASK_THREE  & this->value) >> 8) << ' ' <<\
    std::bitset<8>((BYTEMASK_FOUR   & this->value) >> 0) << " <- " << this->value << std::endl;
    return (this->value);
}

void    Fixed::setRawBits(int const raw)
{
    this->value = raw;
    // std::cout << "setRawBits function called" << std::endl;
}

bool    Fixed::has_fraction(void)const
{
    return (((BYTEMASK_FOUR & this->value) << 24) != 0);
}

ssize_t Fixed::overflows(const int l)const
{
    if (l > std::numeric_limits<int>::max())
    {
        std::cout << l << " overflows int max" << std::endl;
        return (1);
    }
    if (l < std::numeric_limits<int>::min())
    {
        std::cout << l << " underflows int min" << l << std::endl;
        return (-1);
    }
    return (0);
}

void    Fixed::show(std::ostream& os)const
{
    if (has_fraction())
        os << this->toFloat();
    else
        os << this->toInt();
}


std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    fixed.show(os);
    return (os);
}



