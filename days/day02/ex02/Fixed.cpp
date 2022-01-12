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

#define abs(X) X ? X > 0 : -X

const int Fixed::BITS = 8;

// COPLIEN FORM
// Default constructor

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor (Ctor)
Fixed::Fixed(const Fixed& other) : value(other.value)
{
/* Initializing an object with another object */
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
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
    // std::cout << "Destructor called" << std::endl;
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
    float val = (this->toFloat() + other.toFloat()) * (1UL << BITS);
    this->setRawBits(val);
    return (*this);

}

Fixed& Fixed::operator-(const Fixed& other)
{
    float val = (this->toFloat() - other.toFloat()) * (1UL << BITS);
    this->setRawBits(val);
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
    // *this = Fixed(EPSILON);
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
    float val = (this->toFloat() * other.toFloat());
    this->setRawBits(this->convert(val));
    return (*this);
}

Fixed& Fixed::operator/(const Fixed& other)
{
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

Fixed::Fixed(float f)
{
    this->value = convert(f);
}

Fixed::Fixed(int n)
{
    long num = convert(n);
    this->setRawBits(num);
}

int Fixed::toInt(void)const
{
    return (static_cast<int>(roundf(this->toFloat())));
}

float   Fixed::toFloat(void)const
{
    return ((static_cast<float>(this->value)) / static_cast<float>(1UL << BITS));
}

long Fixed::convert(int val)
{
    return (static_cast<long>(val) << BITS);
}

float Fixed::convert(float val)
{
    return ((roundf((1UL << BITS) * val)));
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
    ssize_t ret = this->overflows(raw);

    if (ret == -1)
        this->value = 0;
    else if (ret == 1)
        this->value = std::numeric_limits<int>::max();
    else
        this->value = raw;
    // std::cout << "setRawBits function called" << std::endl;
}

bool    Fixed::has_fraction(void)const
{
    return (((BYTEMASK_FOUR & this->value) << 24) != 0);
}

ssize_t Fixed::overflows(const long l)const
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



