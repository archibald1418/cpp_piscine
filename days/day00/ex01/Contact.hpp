#ifndef CONTACT_H
# define CONTACT_H
#include <string>
#include <iostream>

typedef std::string string;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
        
    public:
        Contact(string first_name,
                string last_name,
                string nickname,
                string phone_number,
                string darkest_secret); // All these get prompted from the user
        ~Contact();

        string get_phone_number(string phone_number)const;
        void set_phone_number(string phone_number);

        string get_first_name(string first_name)const;
        void set_first_name(string first_name);
        
        string get_last_name(string last_name)const;
        void set_last_name(string last_name);

        void set_nickname(string nickname);
        string get_nickname(string nickname)const;

        void set_darkest_secret(string darkest_secret);
        string get_darkest_secret(string darkest_secret)const;

        //FIXME: see settings.json & cpp.json snippets
        
}

#endif