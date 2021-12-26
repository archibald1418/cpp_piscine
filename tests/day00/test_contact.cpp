#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <readline/readline.h>




int main(int argc, char const *argv[])
{
    std::string line;
    std::string word;
    char *cstr = NULL;

    size_t i = 0;
    size_t end;
    while (true)
    {
        line = readline("prompt >> ");
        if (line.empty())
            continue;
        if (line == "exit")
            exit(0);

        i = 0;
        while (i < line.length())
        {
            while (line[i] == ' ' && i < line.length())
                i++;
            if (i == line.length())
                break;
                
            end = line.find(' ', i);
            word = line.substr(i, end - i);
            // cstr = const_cast<char*>(s.c_str());
            // printf("found -> '%s';\n span (%zu, %zu)\n.", cstr, i, i + s.length());
            i += s.length();
            printf("\n= %zu\n", i);
        }
        printf("\n_______________\n");
    }
    return 0;
}
