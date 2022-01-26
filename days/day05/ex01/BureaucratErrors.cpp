#include "BureaucratErrors.hpp"
#include "Bureaucrat.hpp"
#include "Form.hpp"

ABureaucratError::ABureaucratError(){};
ABureaucratError::ABureaucratError(std::string msg) : msg(msg){};
ABureaucratError::~ABureaucratError() throw(){};
ABureaucratError::ABureaucratError (const ABureaucratError& other)
{
    *this = other;
};

ABureaucratError& ABureaucratError::operator=(const ABureaucratError& other)
{
    this->msg = other.msg;
    return (*this);
};

const char* ABureaucratError::what() const throw()
{
    return (this->msg.c_str());
};


Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    this->msg = "Grade too high!";
};

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    this->msg = "Grade too low!";
};

