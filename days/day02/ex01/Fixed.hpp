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
    Fixed& operator=(const Fixed& other); // returns *this
    Fixed();
    ~Fixed();

    Fixed(int n); // Convert int to fixed(BITS)
    Fixed(float f); // Convert float to fixed(BITS)
    
    float toFloat(void) const; // 
    int toInt(void)const;
    
    // Fixed point representation
    static long  convert(int val); // Print int value as fixed(8)
    static float  convert(float val); // Print int value as fixed(8)

    bool has_fraction(void)const;
    ssize_t overflows(long const l)const;
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void show(std::ostream& os)const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif