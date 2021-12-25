#include "PhoneBook.hpp"
#include <string>
#include <iomanip>

PhoneBook::PhoneBook()
{
    this->contacts.top = 0;
    
}

PhoneBook::~PhoneBook()
{
    std::cout << "Phone Book is destroted" << std::endl;
}

void    PhoneBook::exit()
{
    std::exit(0);
}

void    PhoneBook::add(Contact contact)
{
    t_contacts *contacts = &this->contacts;
    if (contact.is_empty() == false)
    {
        contacts->list[contacts->top] = contact;
        contacts->top++;
        contacts->top %= BOOK_SIZE;
    }
}

void    PhoneBook::search()
{
    int i = 0;
    t_contacts *contacts = &this->contacts;
    while (i < contacts->top)
    {
        show_contact(i);
        i++;
    }
}

void   PhoneBook::show_contact(int i)
{

    std::cout << '|';

    // Show index
    std::cout << std::setw(10);
    std::cout << i;
    
    Contact contact = this->contacts.list[i];
    show_field(contact.get_first_name());
    show_field(contact.get_last_name());
    show_field(contact.get_nickname());
}

void    PhoneBook::show_field(string field)
{
    std::cout << std::setw(10);
    int i = 0;
    while ((i < field.length()) && i < (FIELD_WIDTH - 1))
    {
        std::cout << field[i];
        i++;
    }
    std::cout << '.';
}


void    PhoneBook::show_contacts()
{
    if (this->is_empty())
        return ;
    delineate();
    int i = 0;
    while (i < this->contacts.top)
    {
        show_contact(i);
        std::cout << std::endl;
    }
    delineate();
    std::cout << std::endl;
}

void    PhoneBook::delineate()
{
    std::cout << std::string(TABLE_WIDTH, '|');
}

bool    PhoneBook::is_empty()
{
    return (this->contacts.top == 0);
}

