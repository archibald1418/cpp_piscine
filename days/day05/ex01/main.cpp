#include "Bureaucrat.hpp"
#include "BureaucratErrors.hpp"
#include "Form.hpp"
#include <stdexcept>

// typedef std::exception Exception;


int main()
{
    try 
    {
        Bureaucrat b1("Sechin",     50);
        Bureaucrat b2("Medvedev",   100);
        Bureaucrat b3("Putin",      1);
        Bureaucrat b4("Kirienko",     150);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;
        
        Form flow("official",     100,    100);
        Form fhigh("presidential", 1,      1);

        
        std::cout << flow << std::endl;
        std::cout << fhigh << std::endl;

        b4.signForm(flow);
        b4.signForm(fhigh);

        std::cout << flow << std::endl;
        std::cout << fhigh << std::endl;
    }
    // Init errors
    catch(Bureaucrat::GradeException& e)
    {
        std::cout << RED << "BureaucratError: InitError: ";
        std::cout << e.what() << RESET << std::endl;
    }
    catch(Form::GradeException& e)
    {
        std::cout << RED << "FormError: InitError: ";
        std::cout << e.what() << RESET << std::endl;
    }
}