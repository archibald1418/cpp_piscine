#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>

# include "BureaucratErrors.hpp"
# include "Form.hpp"


class ShrubberyCreationForm : public Form
{
    
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm (const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    
    ShrubberyCreationForm(std::string target);
    void    execute(const Bureaucrat& executor)const;
};


const std::string shrubbery =
std::string("                    .o00o\n") + \
std::string("                   o000000oo\n") + \
std::string("                  00000000000o\n") + \
std::string("                 00000000000000\n") + \
std::string("              oooooo  00000000  o88o\n") + \
std::string("           ooOOOOOOOoo  ```''  888888\n") + \
std::string("         OOOOOOOOOOOO'.qQQQQq. `8888'\n") + \
std::string("        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n") + \
std::string("        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n") + \
std::string("         OOOOOOOOO QQQQQQQQQQ/ /QQ\n") + \
std::string("           OOOOOOOOO `QQQQQQ/ /QQ'\n") + \
std::string("             OO:F_P:O `QQQ/  /Q'\n") + \
std::string("                \\. \\ |  // |\n") + \
std::string("                d\\ \\\\|_////\n") + \
std::string("                qP| \\ _' `|Ob\n") + \
std::string("                   \\  / \\  \\Op\n") + \
std::string("                   |  | O| |\n") + \
std::string("           _       /\\. \\_/ /\n") + \
std::string("            `---__/|_\\   //|  __\n") + \
std::string("                  `-'  `-'`-'-'\n")
;

#endif