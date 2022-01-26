#include "Bureaucrat.hpp"
#include <stdexcept>

typedef std::exception Exception;


int main()
{
    try 
    {
        Bureaucrat b1("kek", 150);
        Bureaucrat b2("lol", 0);
        b2.upGrade();
        
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        
    }
    catch(const Exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}