#ifndef FIXED_H
# define FIXED_H




class Fixed
{
private:
    int value;
    static const int BITS;
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw) const;
};



#endif