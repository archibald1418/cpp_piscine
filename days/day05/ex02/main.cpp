#include "Bureaucrat.hpp"
#include "BureaucratErrors.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <stdexcept>

typedef std::exception Exception;


int main()
{
        try 
        {
        //         Bureaucrat b("putin", 1);
        //         ShrubberyCreationForm form("home");
        //         PresidentialPardonForm pform("putin");
        //         RobotomyRequestForm rform("kozhanyi meshok");

        //         b.signForm(form);
        //         b.signForm(pform);
        //         b.executeForm(pform);
        //         b.executeForm(rform);
                Bureaucrat putin("putin", 1);
                Bureaucrat medvedev("medvedev", 140);
                Bureaucrat mishustin("mishustin", 40);
                // Bureaucrat me("me", -1);
                // Bureaucrat me2("me2", 151);

                ShrubberyCreationForm sform("home");
                PresidentialPardonForm pform("ur mom");
                RobotomyRequestForm rform("kozhanyi meshok");
                // Form customForm("Become gay", 150, 150);
                std::cout << sform << std::endl;
                std::cout << pform << std::endl;
                std::cout << rform << std::endl;

                mishustin.signForm(sform);
                putin.executeForm(sform);

                putin.signForm(pform);
                putin.executeForm(pform);

                mishustin.signForm(rform);
                mishustin.executeForm(rform);

                ShrubberyCreationForm sform2("aaaaaa");
                medvedev.signForm(sform2);
                medvedev.executeForm(sform2);

                
                
        }
        catch (Bureaucrat::GradeException& e)
        {
                std::cout << "Init bureuacrat error: " << e.what() << std::endl;
        }
        catch (Form::GradeException& e)
        {
                std::cout << "Init form error: " << e.what() << std::endl;
        }
}