#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : 
    Form("Robotomy Request Form",
        72,
        45
    )
{
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
    Form("Robotomy Request Form",
        72,
        45
    )
{
    this->target = target;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm& other)
{
    *this = other;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat& executor)const
{
    (void)executor;
    std::cout << CYAN << BOLD <<\
        "Drrr drrr drrr\n'" << this->target << "' has been robotomized successfully 50\% of the time" << RESET << std::endl;
}