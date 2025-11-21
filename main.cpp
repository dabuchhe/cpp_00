#include <iostream>
#include "contact.hpp"
#include "phonebook.hpp"

// int main(int ac, char **av)
// {
//     while (1)
//     {
//         if (exit)
//             // break;
//         if (add)
//         {
//             // save a new_contact:
//             //  - define first name
//             //  - define last name
//             //  - define nickname
//             //  - define phone number
//             //  - define darkest secret
//         }
//         if (search)
//         {
//             // display contact:
//             //  - display first name
//             //  - display last name
//             //  - display nickname
//             //  - display phone number
//             //  - display darkest secret
//         }
//     }
// }

void    addContact(PhoneBook PhoneBook)
{
    
}

int main(int ac, char **av)
{
    // (void)ac;
    // (void)av;
    PhoneBook PhoneBook;
    std::string input;
    
    
    while (1)
    {
        std::cin >> input;
        if (input == "EXIT")
            break;
        // if (input == "ADD") // TODO: handle white space ?
        //     PhoneBook::addContact;
        // if (input == "SEARCH")
        //      getContact();
        //      displayContact();     

    }
    return (0);
}

