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
    std::cout << std::setw(10) << "Give me your ";
    std::cout << std::left << std::setw(15) << field_name << "  -> ";
    std::getline(std::cin, field);
}


void    loop()
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
        }
        if (input == "SEARCH" || input == "search")
            phonebook.show_contacts();
    }
}

void    objs()
{
    Contact lst[2];

    lst[0] = Contact();
    lst[1]= Contact();

    Contact contact = Contact("aasdf", "a", "b", "d", "a");
    lst[0] = contact;
    
    lst[0].show_contact();
}

int main(int argc, char **argv, char **env)
{
    // objs();
    loop();
}

