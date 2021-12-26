#ifndef CONTACT_H
# define CONTACT_H
#include <string>

typedef std::string string;

class Contact
{
    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;
        
        // Contact(); // constructor can be private so the object is closed for copying
        
    public:
        Contact(string first_name,
                string last_name,
                string nickname,
                string phone_number,
                string darkest_secret); // All these get prompted from the user
        Contact(){
            first_name = "",
            last_name = "",
            nickname = "",
            phone_number = "",
            darkest_secret = "";};
        Contact(string attrs[5]); // good for testing
        ~Contact();

        bool    is_empty();
        bool    is_init();
        void    update_contact(Contact &contact);
        void    show_contact();

        // Getters
        string  get_first_name()const;
        string  get_last_name()const;
        string  get_nickname()const;
        string  get_phone_number()const;
        string  get_darkest_secret()const;
        
        
        
        

        /*
        Each column must be 10 chars wide, right aligned and separated by a ’|’
            character. 
        Any output longer than the columns’ width is truncated and the
            last displayable character is replaced by a dot (’.’)
        */
        

};

#endif