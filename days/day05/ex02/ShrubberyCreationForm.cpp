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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
    std::ofstream outfile(target + "_shrubbery");

    outfile.write(shrubbery, ft_strlen(shrubbery)); // TODO: test if counts ok

    
}