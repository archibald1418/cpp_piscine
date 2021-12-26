#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <cctype>
#include <readline/readline.h>
#include "Contact.hpp"

#define NUM_ATTRIBUTES 5




int main(int argc, char **argv)
{
    std::string line;
    std::string word;
    char *cstr = NULL;



    size_t i = 0;
    size_t j = 0;
    size_t end;
    const Contact &contact = Contact();
    while (true)
    {
        line = readline("prompt >> ");
        if (line.empty())
            continue;
        if (line == "exit")
            exit(0);

        i = 0;
        j = 0;
        std::string attributes[NUM_ATTRIBUTES];
        while (i < line.length())
        {
            while (line[i] == ' ' && i < line.length())
                i++;
            if (i == line.length())
                break;
                
            end = line.find(' ', i);
            word = line.substr(i, end - i);

            
            i += word.length();
            attributes[j] = word;
            j++;
            if (j == NUM_ATTRIBUTES)
            {
                // const_cast<Contact&>(contact) -> T(ype) 'reference'
                Contact(attributes).show_contact();
                break;
            }
        }
        printf("\n_______________\n");
        
    }
    return 0;
}



