#include "Form.hpp"
#include "BureaucratErrors.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name) : 
    name(name), 
    grade_sign(MINGRADE),
    grade_exec(MINGRADE),
    is_signed(false)
{}

Form::Form() : 
    name(""), 
    grade_sign(MINGRADE),
    grade_exec(MINGRADE),
    is_signed(false)
{}


Form::Form(std::string name, 
            int grade_sign, 
            int grade_exec) : 
        name(name),
        grade_sign(initGradeSign(grade_sign)),
        grade_exec(initGradeExec(grade_exec)),
        is_signed(false)
{}

Form::~Form()
{}

Form::Form (const Form& other) : 
    // Const fields can only be initialized
    name(other.name),
    grade_sign(other.grade_sign),
    grade_exec(other.grade_exec)
{
    *this = other;
}

Form& Form::operator=(const Form& other)
{
    if (this == &other)
        return (*this);
    this->is_signed = other.is_signed;
    return (*this);
}

/* Const field initters */ 
int Form::initGradeSign(int grade)
{
    std::cout << "Initializing grade_sign" << std::endl;
    if (grade < 1)
        throw  GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    return (grade);
}

int Form::initGradeExec(int grade)
{
    std::cout << "Initializing grade_exec" << std::endl;
    if (grade < 1)
        throw  GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    return (grade);
}

/* 
**    Setters Getters 
*/

void Form::setIsSigned(bool is_signed)
{
    this->is_signed = is_signed;
}

bool Form::getIsSigned()const
{
    return (this->is_signed);
}

const int& Form::getGradeSign()const
{
    return (this->grade_sign);
}

const int& Form::getGradeExec()const
{
    return (this->grade_exec);
}

std::string Form::getName()const
{
    return (this->name);
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
    os << "FORM" << std::endl;
    os << std::string (25, '@') << std::endl;
    os << std::left << "name:\t'" + f.getName() + "'" << std::endl;
    os << std::string (25, '_') << std::endl;
    os << std::left << "grade sign:\t" << f.getGradeSign() << std::endl;
    os << std::left << "grade exec:\t" << f.getGradeExec() << std::endl;
    os << ".." << std::endl;
    os << std::left << "signed:\t" << std::boolalpha << f.getIsSigned() << std::endl;
    os << std::string(25, '@') << std::endl;
    return (os);
}

void    Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() > this->getGradeSign())
        throw Form::GradeTooLowException();
    this->setIsSigned(true);
        
}

