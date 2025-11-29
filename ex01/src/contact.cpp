#include "contact.hpp"

Contact::Contact()
{
    // std::cerr << "Contacts constructor is called" << std::endl;
}

Contact::~Contact()
{
    // std::cerr << "Contacts destructor is called" << std::endl;
}

int Contact::getId(){
    return (this->id);
}

std::string Contact::getFirstName(){
    return (this->firstName);
}

std::string Contact::getLastName(){
    return (this->lastName);
}

std::string Contact::getNickName(){
    return (this->nickName);
}

std::string Contact::getPhoneNumber(){
    return (this->phoneNumber);
}

std::string Contact::getDarkestSecret(){
    return (this->darkestSecret);
}

void    Contact::setId(int &newId){
    this->id = newId;
}

void    Contact::setFirstName(std::string &newFirstName){
    this->firstName = newFirstName;
}

void    Contact::setLastName(std::string &newLastName){
    this->lastName = newLastName;
}

void    Contact::setNickName(std::string &newNickName){
    this->nickName = newNickName;
}

void    Contact::setPhoneNumber(std::string &newPhoneNumber){
    this->phoneNumber = newPhoneNumber;
}

void    Contact::setDarkestSecret(std::string &newDarkestSecret){
    this->darkestSecret = newDarkestSecret;
}
