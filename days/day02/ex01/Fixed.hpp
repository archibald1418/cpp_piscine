#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>


class Fixed
{
private:
    int value; // FP Bits; TODO: check 8bit overflow
    static const int BITS;
public:
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other); // returns *this
    Fixed();
    ~Fixed();

    Fixed(int n); // Convert int to fixed(8)
    Fixed(float f); // Convert float to fixed(8)
    float toFloat(void) const; // 
    int toInt(void)const;
    std::string    toString()const; // repr
    
    // Fixed point representation
    static std::string    convert(int val); // Print int value as fixed(8)
    static std::string    convert(float val); // Print int value as fixed(8)
    
    

    int getRawBits(void) const;
    void setRawBits(int const raw) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& fixed);

#endif