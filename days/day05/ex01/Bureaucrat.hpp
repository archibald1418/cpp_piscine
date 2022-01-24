#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>
# include "BureaucratErrors.hpp"

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;

    class GradeTooLowException : public ABureaucratError
    {
        public:
            GradeTooLowException();
    };
    class GradeTooHighException : public ABureaucratError
    {
        public:
            GradeTooHighException();
    };
    
public:
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


};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif
