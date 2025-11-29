#include "phonebook.hpp"
#include <cstdlib>

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

	// TODO: contact can´t have empty field;
	// move_old_contact
	for (int i = 7; i > 0; i--)
	{
		this->contact[i] = this->contact[i - 1];
	}
	// reset id
	for (int i = 0; i < 8; i++)
	{
		this->contact[i].setId(i);
	}
	// set_contact_info
	cout << "Enter first name:" << endl;
	cin >> buffer;
	if (buffer.empty())
		cerr << "Error: field can't be empty";
	this->contact[0].setFirstName(buffer);
	cout << "Enter last name:" << endl;
	cin >> buffer;
	if (buffer.empty())
		cerr << "Error: field can't be empty";
	this->contact[0].setLastName(buffer);
	cout << "Enter nickname:" << endl;
	cin >> buffer;
	if (buffer.empty())
		cerr << "Error: field can't be empty";
	this->contact[0].setNickName(buffer);
	cout << "Enter phone number:" << endl;
	cin >> buffer;
	if (buffer.empty())
		cerr << "Error: field can't be empty";
	this->contact[0].setPhoneNumber(buffer);
	cout << "Enter darkest secret:" << endl;
	cin >> buffer;
	if (buffer.empty())
		cerr << "Error: field can't be empty";
	this->contact[0].setDarkestSecret(buffer);
}

void PhoneBook::displayContact()
{
	// TODO: columns must be 10 char wide
	// TODO: must be right aligned
	// TODO: must be truncate if len > 10 and last char replace by '.'
	// TODO: error message if id invalid

	// display all contact
	for (int i = 0; i < 8; i++)
	{
		cout << PhoneBook::contact[i].getId() << "\t|\t";
		cout << PhoneBook::contact[i].getFirstName() << "\t|\t";
		cout << PhoneBook::contact[i].getLastName() << "\t|\t";
		cout << PhoneBook::contact[i].getNickName() << endl;
	}

	// display contact requested
	string buff;
	int id;

	cout << "Enter id:" << endl;
	cin >> buff;
	if (buff.size() != 1 || !isdigit(buff[0]))
		cerr << "Invalid id: please enter a number between 0 and 8" << endl;
	id = std::atoi(buff.c_str());
	if (id < 0 || id > 7)
		cerr << "Invalid id: please enter a number between 0 and 8" << endl;
	cout << PhoneBook::contact[id].getId() << endl;
	cout << PhoneBook::contact[id].getFirstName() << endl;
	cout << PhoneBook::contact[id].getLastName() << endl;
	cout << PhoneBook::contact[id].getNickName() << endl;
}