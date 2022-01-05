#ifndef KAREN_H
# define KAREN_H
# include <string>

enum Complaints {
    Unknown = -1,
    Debug = 0,
    Info,
    Warning,
    Error
};

#define NUM_LEVELS 4

class Karen
{

    private:
        void debug();
        void info();
        void warning();
        void error();

        void (Karen::*complaints[NUM_LEVELS])(void);
        
        
        
    public:
        Karen();
        ~Karen();
        void    complain(std::string level);
        static int getLevelIndex(std::string level);
        static std::string levels[NUM_LEVELS];
        
};




#endif