#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
#define BOOK_SIZE   8
#define FIELD_WIDTH 10
#define NUM_FIELDS 4
#define NUM_SEPS NUM_FIELDS + 1
#define TABLE_WIDTH FIELD_WIDTH * NUM_FIELDS + NUM_SEPS

typedef struct  s_contacts
{
    Contact list[BOOK_SIZE];
    int     top;
    int     last;
}               t_contacts;

class PhoneBook
{
private:
    t_contacts      contacts;
    void            show_field(string field);
    bool            is_empty();
    
public:
    PhoneBook();
    ~PhoneBook();
    static void     delineate();
    void    exit();
    void    add(Contact &contact);
    void    show_contact(int i);
    void    show_contacts();
    void    search(int i);
    void    show_last_contact();
    // search

        
    

};


#endif