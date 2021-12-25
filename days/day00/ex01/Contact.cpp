#include "Contact.hpp"


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

bool    Contact::is_empty()
{
    return (
        this->first_name == "" && \
        this->last_name == "" && \
        this->nickname == "" && \
        this->phone_number == "" && \
        this->darkest_secret == ""
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