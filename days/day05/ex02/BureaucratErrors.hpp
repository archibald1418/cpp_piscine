#ifndef BUREAUCRATERRORS_H
# define BUREAUCRATERRORS_H

#include <exception>
#include <stdexcept>
#include <iostream>


#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLD    "\e[1m"

#define MINGRADE 150
#define MAXGRADE 1

class ABureaucratError : public std::exception
    {
    protected:
        std::string msg;
        
    public:
        ABureaucratError();
        ABureaucratError(std::string msg);
        ABureaucratError (const ABureaucratError& other);
        virtual ~ABureaucratError() throw(); //defined in parent
        virtual ABureaucratError& operator=(const ABureaucratError& other);
        virtual const char* what() const throw();

};

// class GradeException : public ABureaucratError{};





#endif
