#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>
#include "contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        void    displayContact();
        void    addContact();

    private:
        Contact contact[8];
} ;

// void    PhoneBook::displayContact()
// {
//     std::string input;
//     std::cin >> input;
//     for (int i = 0; i < 8; i++)
//     {
//         if ([i].id == input)
//     }
// }

#endif