#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <iostream>

# include "BureaucratErrors.hpp"
# include "Bureaucrat.hpp"
# include "Form.hpp"


class RobotomyRequestForm : public Form
{
    
public:
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm (const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    
    RobotomyRequestForm(std::string target);
    void    execute(const Bureaucrat& executor)const;
};

#endif