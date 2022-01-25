#include "Bureaucrat.hpp"
#include "BureaucratErrors.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <stdexcept>

typedef std::exception Exception;


int main()
{
    try 
    {
        ShrubberyCreationForm form("home");
        std::cout << form << std::endl;
    }
    catch(Exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
}