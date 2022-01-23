#ifndef BUREAUCRATERRORS_H
# define BUREAUCRATERRORS_H

#include <exception>
#include <stdexcept>
#include <iostream>


class ABureaucratError : public std::exception
    {
    protected:
        std::string msg;
        
    public:
        ABureaucratError(){};
        ABureaucratError(std::string msg) : msg(msg){};
        virtual ~ABureaucratError() throw(){}; //defined in parent
        ABureaucratError (const ABureaucratError& other){*this = other;};
        ABureaucratError& operator=(const ABureaucratError& other){
            this->msg = other.msg; 
            return (*this);
            };
        const char* what() const throw(){
            return (this->msg.c_str());
        }

};

class GradeTooLowException : public virtual ABureaucratError
{
    public:
        GradeTooLowException() {
            this->msg = "Grade too low";
        };
};

class GradeTooHighException : public virtual ABureaucratError
{
    public:
        GradeTooHighException() {
            this->msg = "Grade too high";
        };
};

#endif