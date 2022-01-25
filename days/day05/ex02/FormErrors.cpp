#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException()
{
    this->msg = "Grade too high!";
};

Form::GradeTooLowException::GradeTooLowException()
{
    this->msg = "Grade too low!";
};