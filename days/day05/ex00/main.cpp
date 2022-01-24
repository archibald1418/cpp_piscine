#include "Bureaucrat.hpp"
#include <stdexcept>

typedef std::exception Exception;


int main()
{
    try 
    {
        // Bureaucrat("kek", 178);
        Bureaucrat b1("kek", 5);
        Bureaucrat b2("lol", 150);
        
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        
    }
    catch(const Exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}