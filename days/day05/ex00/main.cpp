#include "Bureaucrat.hpp"
#include <stdexcept>

typedef std::exception Exception;

int main()
{
    try {
           Bureaucrat("kek", 178);
        }
    catch(const Exception& e){
        std::cout << e.what() << std::endl;
    }
}