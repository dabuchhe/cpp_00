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
        void    displayTruncate(std::string sub);
        void    addContact();
        int     getContactNumber();
    private:
        Contact contact[8];
} ;

#endif