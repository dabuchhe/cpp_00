#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    PhoneBook myPhoneBook;
    std::string input;
    
    while (1)
    {
        std::getline(std::cin, input);
        if (input == "EXIT")
            break;
        if (input == "ADD")
            myPhoneBook.addContact();
        if (input == "SEARCH")
            myPhoneBook.displayContact();
    }
    return (0);
}
