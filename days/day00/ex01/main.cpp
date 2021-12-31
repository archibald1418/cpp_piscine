#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>


void    get_user_input(string field_name, string &field)
{
    std::cout << std::setw(10) << "Give me your ";
    std::cout << std::left << std::setw(15) << field_name << "  -> ";
    std::getline(std::cin, field);
}

void    repl()
{
    string input;
    PhoneBook phonebook = PhoneBook();
    Contact contact;
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;
    string index;

    while (true)
    {
        std::cout << "PhoneBook >> ";
        std::getline(std::cin, input);
        if (input.empty())
            continue;
        if (input == "EXIT")
            exit(0);
        if (input == "ADD")
        {
            get_user_input("first name", first_name);
            get_user_input("last name", last_name);
            get_user_input("nickname", nickname);
            get_user_input("phone number", phone_number);
            get_user_input("darkest secret", darkest_secret);
            contact = Contact(first_name, \
                                last_name,
                                nickname,
                                phone_number,
                                darkest_secret);
            if (!contact.is_empty())
                phonebook.add(contact);
                // phonebook.show_last_contact();
        }
        if (input == "SEARCH")
        {
            phonebook.show_contacts();
            get_user_input("contact index", index);
            phonebook.search(atoi(index.c_str()));
        }
    }
}

int main()
{
    repl();
    return (0);
}
