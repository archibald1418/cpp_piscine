#include "Contact.hpp"
#include <iostream>
#include <iomanip>


Contact::Contact(string first_name,
                string last_name,
                string nickname,
                string phone_number,
                string darkest_secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

Contact::~Contact()
{
    std::cout << "Contact destroyed\n";
}

Contact::Contact(string attrs[5])
{
    this->first_name = attrs[0];
    this->last_name = attrs[1];
    this->nickname = attrs[2];
    this->phone_number = attrs[3];
    this->darkest_secret = attrs[4];
}

bool    Contact::is_empty()
{
    return (
        this->first_name.empty() && \
        this->last_name.empty() && \
        this->nickname.empty() && \
        this->phone_number.empty() && \
        this->darkest_secret.empty()
    );
}

bool    Contact::is_init()
{
    return (
        this->first_name != "" && \
        this->phone_number != ""); // I chose these as primary keys
}

void    Contact::update_contact(Contact &contact)
{
    this->first_name = contact.first_name;
    this->last_name = contact.last_name;
    this->nickname = contact.nickname;
    this->phone_number = contact.phone_number;
    this->darkest_secret = contact.darkest_secret;
}

void    Contact::show_contact()
{
    std::cout << std::setw(20) <<  "first name ->" << std::setw(10) << this->first_name + "\n";
    std::cout << std::setw(20) <<  "last_name ->"  << std::setw(10) << this->last_name + "\n";
    std::cout << std::setw(20) <<  "phone number ->"  << std::setw(10) << this->phone_number + "\n";
    std::cout << std::setw(20) <<  "nickname ->" << std::setw(10)  << this->nickname + "\n";
    std::cout << std::setw(20) <<  "darkest secret ->" << std::setw(10) << this->darkest_secret + "\n";
}

string Contact::get_first_name()const
{
    return (this->first_name);
}

string Contact::get_last_name()const
{
    return (this->last_name);
}

string Contact::get_nickname()const
{   
    return (this->nickname);
}

string Contact::get_phone_number()const
{
    return (this->phone_number);
}

string Contact::get_darkest_secret()const
{
    return (this->darkest_secret);
}