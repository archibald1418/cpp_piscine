#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include "BureaucratErrors.hpp"

class Form;
# include "Form.hpp"

class Bureaucrat
{
    
private:
    const std::string   name;
    int                 grade;
public:
    class GradeException : public ABureaucratError{};
    class GradeTooLowException : public GradeException
    {
        public:
            GradeTooLowException();
    };
    class GradeTooHighException : public GradeException
    {
        public:
            GradeTooHighException();
    };
    
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat (const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    Bureaucrat(std::string name, int grade);

    void setName(const std::string& name);
    std::string getName()const;

    void setGrade(int grade);
    int getGrade()const;

    void    upGrade();
    void    downGrade();
    void    signForm(Form& f);





};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
