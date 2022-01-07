#ifndef FIXED_H
# define FIXED_H




class Fixed
{
private:
    int value;
    static const int BITS;
public:
    Fixed(int width, int pos);
    Fixed(const Fixed& other);
    Fixed& operator=(const Fixed& other);
    Fixed();
    ~Fixed();
};



#endif