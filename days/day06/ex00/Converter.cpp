#include "Converter.hpp"

Converter::Converter() : _num(0)
{
    
}
Converter::~Converter()
{
    
}
Converter::Converter (const Converter& other)
{
    *this = other;
}
Converter& Converter::operator=(const Converter& other)
{
    if (this == &other)
        return (*this);
    this->_num = other._num;
    return (*this);
}

void Converter::setNum(double _num)
{
    this->_num = _num;
}

double Converter::getNum()const
{
    return (this->_num);
}

void    Converter::convertPrintChar()const 
{
    std::cout << "char: ";
    if (!isascii(static_cast<int>(this->_num)))
        throw ImpossibleToConvert();
    if (!isprint(static_cast<int>(this->_num)))
        throw NotDisplayable();
    
    std::cout << static_cast<char>(this->_num) << std::endl;
}

void    Converter::convertPrintInt()const
{
    std::cout << "int: ";

    if (this->_num > std::numeric_limits<int>::max() || \
        this->_num < std::numeric_limits<int>::min() || \
        std::isnan(this->_num) || std::isinf(this->_num))
        throw ImpossibleToConvert();
    
    std::cout << static_cast<int>(this->_num) << std::endl;
}

void    Converter::convertPrintFloat()const
{
    bool minus = this->_num < -1e-8;
    bool plus = this->_num > 1e-8;

    std::cout << "float: ";
    if (std::isnan(static_cast<float>(this->_num)))
        std::cout << "nan";
    else if (std::isinf(static_cast<float>(this->_num)))
    {
        if (minus)
            std::cout << "-";
        else if (plus)
            std::cout << "+";
        std::cout << "inf";
    }
    else if (-1e-8 <= this->_num && this->_num <= 1e-8)
        std::cout << "0.0";
    else 
    {
        if (((std::fabs(std::fabs(this->_num) - std::numeric_limits<float>::max()) < 1e-8f)))
            throw ImpossibleToConvert();
        else if (std::fabs(std::fabs(this->_num) - std::numeric_limits<float>::min() < 1e-8f))
            throw ImpossibleToConvert();
        else 
            std::cout << static_cast<float>(this->_num);
    }
    std::cout << "f" << std::endl;
}

void    Converter::convertPrintDouble()const
{
    bool minus = this->_num < -1e-14;
    bool plus = this->_num > 1e-14;

    std::cout << "double: ";
    if (std::isnan(static_cast<double>(this->_num)))
        std::cout << "nan";
    else if (std::isinf(static_cast<double>(this->_num)))
    {
        if (minus)
            std::cout << "-";
        else if (plus)
            std::cout << "+";
        std::cout << "inf";
    }
    else if (-1e-14 <= this->_num && this->_num <= 1e-14)
        std::cout << "0.0";
    else {
        if (((std::fabs(std::fabs(this->_num) - std::numeric_limits<double>::max()) < 1e-14) || \
            (std::fabs(std::fabs(this->_num) - std::numeric_limits<double>::min() < 1e-14))))
            throw ImpossibleToConvert();
        else
            std::cout << static_cast<double>(this->_num);
    }
    
    std::cout << std::endl;
}

void    Converter::convert(const std::string& name)const
{
    std::string params[4] = {"char", "int", "float", "double"};
    Converter::f func[4] = {
        &Converter::convertPrintChar,
        &Converter::convertPrintInt,
        &Converter::convertPrintFloat,
        &Converter::convertPrintDouble
    };

    int i = 0;
    while (i < 4)
    {
        if (name == params[i])
        {
            try 
            {
                (this->*(func[i]))();
            }
            catch (std::exception &e)
            {
                std::cout << e.what() << std::endl;
            }
            break;
        }
        i++;
    }
    if (i == 4)
        std::cout << "unknown type" << std::endl;
}

