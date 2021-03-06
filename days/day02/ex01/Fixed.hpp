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

    Fixed(const int n); // Convert int to fixed(BITS)
    Fixed(const float f); // Convert float to fixed(BITS)
    
    float toFloat(void) const; // 
    int toInt(void)const;
    
    // Fixed point representation
    static int  convert(int val); // Print int value as fixed(8)
    static int  convert(float val); // Print int value as fixed(8)

    bool has_fraction(void)const;
    static ssize_t overflows(long l);
    
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void show(std::ostream& os)const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif