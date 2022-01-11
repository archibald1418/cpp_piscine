#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>


class Fixed
{
private:
    int value; 
    static const int BITS;
public:
    // Coplien 
    Fixed(const Fixed& other);
    Fixed();
    ~Fixed();
    Fixed& operator=(const Fixed& other); // returns *this

    // Arithmetic
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);

    Fixed& operator+(const Fixed& other);
    Fixed& operator-(const Fixed& other);
    Fixed& operator*(const Fixed& other);
    Fixed& operator/(const Fixed& other);

    static Fixed& min(const Fixed& self, const Fixed& other);
    static Fixed& max(const Fixed& self, const Fixed& other);

    Fixed& operator++();
    Fixed operator++(int n);
    Fixed& operator--();
    Fixed operator--(int n); // Just an int increments only by 1

    static int get_exponent(const Fixed& fixed);

    Fixed(int n); // Convert int to fixed(BITS)
    Fixed(float f); // Convert float to fixed(BITS)
    
    float toFloat(void) const; // 
    int toInt(void)const;
    
    // Fixed point representation
    static long  convert(int val); // Print int value as fixed(8)
    static long  convert(float val); // Print int value as fixed(8)

    bool has_fraction(void)const;
    ssize_t overflows(long const l)const;
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void show(std::ostream& os)const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif