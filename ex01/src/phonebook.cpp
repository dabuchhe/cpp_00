#include "phonebook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

PhoneBook::PhoneBook()
{
	// cout << "PhoneBooks constructor is called" << endl;
}

PhoneBook::~PhoneBook()
{
	// cout << "PhoneBooks destructor is called" << endl;
}


void PhoneBook::addContact()
{
	string	buffer;
	Contact newContact;

	// set_first_name
	cout << "Enter first name:" << endl;
	getline(cin, buffer);
	if (buffer.empty())
	{
		cerr << "Error: field can't be empty" << endl;
		return ;
	}
	newContact.setFirstName(buffer);

	// set_last_name
	cout << "Enter last name:" << endl;
	getline(cin, buffer);
	if (buffer.empty())
	{
		cerr << "Error: field can't be empty" << endl;
		return ;
	}
	newContact.setLastName(buffer);

	// set_nickname
	cout << "Enter nickname:" << endl;
	getline(cin, buffer);
	if (buffer.empty())
	{
		cerr << "Error: field can't be empty" << endl;
		return ;
	}
	newContact.setNickName(buffer);

	// set_phone_number
	cout << "Enter phone number:" << endl;
	getline(cin, buffer);
	if (buffer.empty())
		cerr << "Error: field can't be empty" << endl;
	newContact.setPhoneNumber(buffer);

	// set_darkest_secret
	cout << "Enter darkest secret:" << endl;
	getline(cin, buffer);
	if (buffer.empty())
	{
		cerr << "Error: field can't be empty" << endl; 
		return ;
	}
	newContact.setDarkestSecret(buffer);

	// move_old_contact
	for (int i = 7; i > 0; i--)
		this->contact[i] = this->contact[i - 1];

	// reset id
	for (int i = 1; i < 8; i++)
		this->contact[i].setId(i);

	// add new contact
	this->contact[0] = newContact;
}


int	PhoneBook::getContactNumber()
{
	for (int i = 0; i < 7; i++)
	{
		if (PhoneBook::contact[i].getFirstName().empty())
			return (i);
	}
	return (8);
}

void PhoneBook::displayTruncate(string sub)
{
	if (sub.size() < 10)
		cout << std::setw(10) << sub;
	else
		cout << sub.substr(0, 9) << ".";
}

void PhoneBook::displayContact()
{
	// truncate and display all contact
	string sub;

	for (int i = 0; i < 8; i++)
	{
		if (PhoneBook::contact[i].getFirstName().empty())
			continue;
		cout << std::setw(10) << i << "|";
		sub = PhoneBook::contact[i].getFirstName();
		PhoneBook::displayTruncate(sub);
		cout << "|";
		sub = PhoneBook::contact[i].getLastName();
		PhoneBook::displayTruncate(sub);
		cout << "|";
		sub = PhoneBook::contact[i].getNickName();
		PhoneBook::displayTruncate(sub);
		cout << endl;
	}

	// display contact requested
	string buff;
	int id;
	int	contactMax = getContactNumber();

	if (PhoneBook::contact[0].getFirstName().empty())
	{
		cerr << "Contact list empty: please add a new contact first" << endl;
		return;
	}
	cout << "Enter id:" << endl;
	cin >> buff;
	if (buff.size() != 1 || !isdigit(buff[0]))
	{
		cerr << "Invalid id: please enter a number between 0 and " << contactMax - 1 << endl;
		return ;
	}
	id = std::atoi(buff.c_str());
	if (id < 0 || id > contactMax - 1)
	{
		cerr << "Invalid id: please enter a number between 0 and " <<contactMax - 1 << endl;
		return ;
	}
	cout << PhoneBook::contact[id].getId() << endl;
	cout << PhoneBook::contact[id].getFirstName() << endl;
	cout << PhoneBook::contact[id].getLastName() << endl;
	cout << PhoneBook::contact[id].getNickName() << endl;
}