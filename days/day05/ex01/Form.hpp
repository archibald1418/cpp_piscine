#include <iostream>
#include "BureaucratErrors.hpp"
#include "Bureaucrat.hpp"

class Form
{
private:
    const std::string name;
    const int  grade_sign;
    const int  grade_exec;
    bool is_signed;

public:
    Form(std::string name);
    ~Form();
    Form();
    ~Form();
    Form (const Form& other);
    Form& operator=(const Form& other);
    Form(std::string name, int grade_sign, int grade_exec);

    static int initGradeSign(int grade);
    static int initGradeExec(int grade);

    const int& getGradeSign()const;
    const int& getGradeExec()const;
    
    void setIsSigned(bool is_signed);
    bool getIsSigned()const;
    std::string Form::getName()const;
    
    void    beSigned(const Bureaucrat& b);
    
    
    // Errors
    class GradeTooHighException : public ABureaucratError
    {
        public: GradeTooHighException();
    };

    class GradeTooLowException : public ABureaucratError
    {
        public: GradeTooLowException();
    };
};


std::ostream& operator<<(std::ostream& os, const Form& f);


