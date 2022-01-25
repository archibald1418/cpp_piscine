#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <iostream>

# include "BureaucratErrors.hpp"
# include "Form.hpp"

const char *shrubbery = 
"                    .o00o"
"                   o000000oo"
"                  00000000000o"
"                 00000000000000"
"              oooooo  00000000  o88o"
"           ooOOOOOOOoo  ```''  888888"
"         OOOOOOOOOOOO'.qQQQQq. `8888'"
"        oOOOOOOOOOO'.QQQQQQQQQQ/.88'"
"        OOOOOOOOOO'.QQQQQQQQQQ/ /q"
"         OOOOOOOOO QQQQQQQQQQ/ /QQ"
"           OOOOOOOOO `QQQQQQ/ /QQ'"
"             OO:F_P:O `QQQ/  /Q'"
"                \\. \ |  // |"
"                d\ \\\|_////"
"                qP| \\ _' `|Ob"
"                   \  / \  \Op"
"                   |  | O| |" 
"           _       /\. \_/ /"
"            `---__/|_\\   //|  __"
"                  `-'  `-'`-'-'";

class ShrubberyCreationForm : public Form
{
    
public:
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm (const ShrubberyCreationForm& other);
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    
    ShrubberyCreationForm(std::string target);
};



#endif