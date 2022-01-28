#ifndef CONVERTER_H
# define CONVERTER_H

# include <iostream>
#include <exception>
#include <cmath>
#include <limits>
#include <iomanip>

class Converter
{
private:
    double _num;
public:
    Converter();
    ~Converter();
    Converter (const Converter& other);
    Converter& operator=(const Converter& other);

    void setNum(double num);
    double getNum()const;

    void convertPrintChar()const;
    void convertPrintInt()const;
    void convertPrintFloat()const;
    void convertPrintDouble()const;

    void convert(const std::string& name)const;

    typedef void (Converter::*f)()const;
    
};

class NotDisplayable : public std::exception
{
        public: virtual const char *what() const throw(){return "Not displayable";}
};

class ImpossibleToConvert : public std::exception
{
    public: virtual const char *what() const throw(){return "Impossible to convert";}
};


#endif