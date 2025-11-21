#include <iostream>
#include <contact.hpp>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        // displayContact();
        // addContact();

    private:
        Contact contact[8];
} ;

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBooks constructor is called" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBooks destructor is called" << std::endl;
}

// void    PhoneBook::displayContact()
// {
//     std::string input;
//     std::cin >> input;
//     for (int i = 0; i < 8; i++)
//     {
//         if ([i].id == input)
//     }
// }