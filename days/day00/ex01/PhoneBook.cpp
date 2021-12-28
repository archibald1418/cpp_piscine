#include "PhoneBook.hpp"
#include <string>
#include <iomanip>
#include <iostream>
#include <cstring>

PhoneBook::PhoneBook()
{
    this->contacts.top = 0;
    this->contacts.last = 0;
}

PhoneBook::~PhoneBook()
{
    // std::cout << "Phone Book is destroted" << std::endl;
}

void    PhoneBook::exit()
{
    std::exit(0);
}

void    PhoneBook::add(Contact &contact)
{
    t_contacts *contacts = &this->contacts;
    if (contact.is_empty() == false)
    {
        contact.index = contacts->last; // change index before copying
        contacts->list[contacts->last % BOOK_SIZE] = contact; // copies into array
        if (contacts->top < BOOK_SIZE)
            contacts->top++;
        contacts->last++;
    }
}

void   PhoneBook::show_contact(int i)
{

    const Contact &contact = this->contacts.list[i % BOOK_SIZE];

    std::cout << '|';
    // Show index
    std::cout << std::right << std::setw(10);
    std::cout << contact.index << '|';
    
    show_field(contact.get_first_name());
    show_field(contact.get_last_name());
    show_field(contact.get_nickname());
}

void    PhoneBook::show_field(string field)
{
    std::cout << std::right << std::setw(10);
    if (field.length() > FIELD_WIDTH)
        std::cout << field.substr(0, FIELD_WIDTH - 1) + ".";
    else
        std::cout << field;
    std::cout << '|';
}

void    PhoneBook::show_last_contact()
{
    if (this->contacts.top == 0)
        return ;
    this->show_contact(this->contacts.last - 1);
    std::cout << std::endl;
}

void    PhoneBook::show_contacts()
{
    int i;
    if (this->is_empty())
        return ;
    i = 0;
    while (i < this->contacts.top)
    {
        delineate();
        show_contact(i);
        std::cout << std::endl;
        i++;
    }
    delineate();
    std::cout << std::endl;
}

void    PhoneBook::delineate()
{
    std::cout << std::string(TABLE_WIDTH, '-') << std::endl;
}

bool    PhoneBook::is_empty()
{
    return (this->contacts.top == 0);
}
