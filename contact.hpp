#include <iostream>
#include <string>

class Contact
{
    public:
        Contact()
        {
            std::cout << "Contact : " << id << " is create" << std::endl;
        };
        ~Contact()
        {
            std::cout << "Contact : " << id << "is destroy" << std::endl;
        };
        addContact();

    private:
        std::string    id;
        std::string    firstName;
        std::string    lastName;
        std::string    nickName;
        std::string    phoneNumber;
        std::string    darkestSecret;

} ;

Contact::Contact()


Contact::~Contact()
{

}