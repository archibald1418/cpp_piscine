#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

int ft_strlen(const char *s)
{
    int i = 0;
    while (s[i++]);
    return (i);
}

ShrubberyCreationForm::ShrubberyCreationForm() : 
    Form("Shrubbery Creation Form",
        145,
        137)
{};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : 
    Form("Shrubbery Creation Form",
        145,
        137)
{
    std::ofstream outfile(target + "_shrubbery");

    outfile.write(shrubbery.c_str(), shrubbery.length());
    outfile.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}