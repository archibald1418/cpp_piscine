#ifndef BUREAUCRATERRORS_H
# define BUREAUCRATERRORS_H

#include <exception>
#include <stdexcept>
#include <iostream>


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

#endif