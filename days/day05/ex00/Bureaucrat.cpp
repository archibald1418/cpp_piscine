#include "Bureaucrat.hpp"
#include "BureaucratErrors.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : name(""), grade(150)
{
}
Bureaucrat::~Bureaucrat(){}
Bureaucrat::Bureaucrat (const Bureaucrat& other)
{
    *this = other;
}


Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
    if (this == &other)
        return (*this);
    return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : 
    name(name){
        this->setGrade(grade);
    }

std::string Bureaucrat::getName()const
{
    return (this->name);
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 0)
        throw  GradeTooLowException();
    if (grade > 150)
        throw GradeTooHighException();
    this->grade = grade;
}

