#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <string>

class Contact
{
    public:
        Contact();
        ~Contact();
        int             getId();
        std::string     getFirstName();
        std::string     getLastName();
        std::string     getNickName();
        std::string     getPhoneNumber();
        std::string     getDarkestSecret();
        void            setId(int &newId);
        void            setFirstName(std::string &newFirstName);
        void            setLastName(std::string &newLastName);
        void            setNickName(std::string &newNickName);
        void            setPhoneNumber(std::string &newPhoneNumber);
        void            setDarkestSecret(std::string &newDarkestSecret);
    
    private:
        int            id;
        std::string    firstName;
        std::string    lastName;
        std::string    nickName;
        std::string    phoneNumber;
        std::string    darkestSecret;

};

#endif