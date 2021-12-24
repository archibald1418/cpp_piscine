#include <iostream>

#define CASE_SHIFT 32

int putstr(char *s)
{
    std::cout << s;
    return (0);
}

int putstrn(char *s)
{
    putstr(s);
    std::cout << std::endl;
    return (0);
}

char    capitalize(char c)
{
    return (c - (CASE_SHIFT * std::islower(c)));
}

void    putstr_capitalized(char *s)
{
    while (*s)
    {
        std::cout << capitalize(*s);
        s++;
    }
}


int main(int argc, char **argv)
{
    if (argc == 1)
        return (putstrn(const_cast<char*>("* LOUD AND UNBEARABLE FEEDBACK NOISE *")));
    
    int i = 1;
    while (i < argc - 1)
    {
        putstr_capitalized(argv[i]);
        std::cout << ' '; // `Insertion` operator
        i++;
    }
    putstr_capitalized(argv[i]);
    std::cout << std::endl; // `Extraction` operator
}




