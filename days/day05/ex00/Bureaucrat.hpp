#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H
# include <iostream>

class Bureaucrat
{
private:
    const std::string   name;
    int                 grade;
    
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

    static void    upGrade();
    static void    downGrade();
};

#endif
