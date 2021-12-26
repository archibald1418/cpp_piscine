#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include <stdio.h>
#include <cctype>
#include <readline/readline.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void    get_user_input(string field_name, string &field)
{
    std::cout << std::setw(20) <<  "Give me your " << field_name << " -> ";
    std::getline(std::cin, field);
}

int main(int argc, char **argv, char **env)
{
    int i = 0;
    string input;
    PhoneBook phonebook = PhoneBook();
    Contact contact;
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;

    while (true)
    {
        std::cout << "PhoneBook >> ";
        std::getline(std::cin, input);
        if (input.empty())
            continue;
        if (input == "EXIT" || input == "exit")
            exit(0);
        if (input == "ADD" || input == "add")
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
            {
                phonebook.add(contact);
                phonebook.show_last_contact();
            }
            break;
        }
    }
}

