#ifndef KAREN_H
# define KAREN_H
# include <string>

class Karen
{

    private:
        void debug();
        void info();
        void warning();
        void error();

        static const int N = 4;
        static std::string levels[N];
        void (Karen::*complaints[N])(void);

        
        
        
        
    public:
        Karen();
        ~Karen();
        void    complain(std::string level);
};




#endif