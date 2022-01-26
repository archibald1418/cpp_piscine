#ifndef FORM_H
# define FORM_H

# include <iostream>
# include "BureaucratErrors.hpp"

  class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
{
protected:
    const std::string name;
    const int  grade_sign;
    const int  grade_exec;
    bool is_signed;

    std::string target;


public:
    Form(std::string name, int grade_sign, int grade_exec);
    Form(std::string name);
    ~Form();
    Form();
    Form (const Form& other);
    Form& operator=(const Form& other);

    static int initGradeSign(int grade);
    static int initGradeExec(int grade);

    const int& getGradeSign()const;
    const int& getGradeExec()const;
    
    void setIsSigned(bool is_signed);
    bool getIsSigned()const;
    std::string getName()const;
    
    void    beSigned(const Bureaucrat& b);

    void    do_execute(const Bureaucrat& executor)const;
    virtual void    execute(const Bureaucrat& executor)const = 0;
    
    // Errors
    class GradeException : public ABureaucratError{};
    class GradeTooHighException : public GradeException
    {
        public: GradeTooHighException();
    };

    class GradeTooLowException : public GradeException
    {
        public: GradeTooLowException();
    };

    class FormNotSignedException : public ABureaucratError
    {
        public: FormNotSignedException();
    };
};


std::ostream& operator<<(std::ostream& os, const Form& f);


#endif