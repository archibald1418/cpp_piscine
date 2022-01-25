#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <iostream>

# include "BureaucratErrors.hpp"
# include "Form.hpp"


class PresidentialPardonForm : public Form
{
    
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm (const PresidentialPardonForm& other);
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    
    PresidentialPardonForm(std::string target);
    void    execute(const Bureaucrat& executor)const;
};

#endif