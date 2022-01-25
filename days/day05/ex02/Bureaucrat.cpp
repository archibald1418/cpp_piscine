#include "Bureaucrat.hpp"
#include "BureaucratErrors.hpp"
#include "Form.hpp"
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
    this->grade = other.grade;
    return (*this);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : 
    name(name){
        this->setGrade(grade);
    }

void    Bureaucrat::upGrade()
{
    std::cout << "Grade is " << this->getGrade() << std::endl;
    std::cout << "Up grade (-1)" << std::endl;
    setGrade(this->grade - 1);
}

void    Bureaucrat::downGrade()
{
    std::cout << "Grade is " << this->getGrade() << std::endl;
    std::cout << "Down grade (+1)" << std::endl;
    setGrade(this->grade + 1); // NOTE: grades are 150min, 0max
}

std::string Bureaucrat::getName()const
{
    return (this->name);
}

void    Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
        throw  GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

int     Bureaucrat::getGrade()const
{
    return (this->grade);
}

void    Bureaucrat::signForm(Form& f)
{
    if (f.getIsSigned())
        return ;
        
    std::cout << "Bureaucrat '" << this->getName() <<\
        "' is signing form '" << f.getName() << "'..." << std::endl;

    try 
    {
        f.beSigned(*this);
    }
    catch(Form::GradeException& e)
    {
        std::cout << RED << "❌ Bureaucrat '" << this->getName() <<\
            "' cannot sign form '" << f.getName() <<\
                "' because '" << e.what() << "'" << RESET << std::endl;
        return;
    }
    std::cout << GREEN << "✅ Bureaucrat " << this->getName() <<\
        " signed form " << f.getName() << RESET << std::endl;
        
    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << "BUREAUCRAT" << std::endl;
    os << std::string (15, '~') << std::endl;
    os << std::left << "name:\t" + b.getName() << std::endl; 
    os << std::string (15, '_') << std::endl;
    os << std::left <<  "grade:\t" << b.getGrade() << std::endl;
    os << std::string(15, '~') << std::endl;
    return (os);
}