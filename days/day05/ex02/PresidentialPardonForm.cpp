#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : 
    Form("Presidential Pardon Form",
        25,
        5)
{};

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
    Form("Presidential Pardon Form",
        25,
        5)
{
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(const Bureaucrat& executor)const
{
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}