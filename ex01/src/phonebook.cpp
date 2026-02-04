/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabuchhe <dabuchhe@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:25:04 by dabuchhe          #+#    #+#             */
/*   Updated: 2026/02/04 21:48:22 by dabuchhe         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>


PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook() {
}


void PhoneBook::addContact() {
	std::string	buffer;
	Contact newContact;

	// set_first_name
	std::cout << "Enter first name:" << std::endl;
	getline(std::cin, buffer);
	if (buffer.empty()) {
		std::cerr << "Error: field can't be empty" << std::endl;
		return ;
	}
	newContact.setFirstName(buffer);

	// set_last_name
	std::cout << "Enter last name:" << std::endl;
	getline(std::cin, buffer);
	if (buffer.empty()) {
		std::cerr << "Error: field can't be empty" << std::endl;
		return ;
	}
	newContact.setLastName(buffer);

	// set_nickname
	std::cout << "Enter nickname:" << std::endl;
	getline(std::cin, buffer);
	if (buffer.empty()) {
		std::cerr << "Error: field can't be empty" << std::endl;
		return ;
	}
	newContact.setNickName(buffer);

	// set_phone_number
	std::cout << "Enter phone number:" << std::endl;
	getline(std::cin, buffer);
	if (buffer.empty())
		std::cerr << "Error: field can't be empty" << std::endl;
	newContact.setPhoneNumber(buffer);

	// set_darkest_secret
	std::cout << "Enter darkest secret:" << std::endl;
	getline(std::cin, buffer);
	if (buffer.empty()) {
		std::cerr << "Error: field can't be empty" << std::endl; 
		return ;
	}
	newContact.setDarkestSecret(buffer);

	// move_old_contact
	for (int i = 7; i > 0; i--)
		this->contact[i] = this->contact[i - 1];

	// add new contact
	this->contact[0] = newContact;
	
	// reset id
	for (int i = 0; i < 8; i++)
		this->contact[i].setId(i);
}


int	PhoneBook::getContactNumber() {
	for (int i = 0; i < 7; i++) {
		if (PhoneBook::contact[i].getFirstName().empty())
			return (i);
	}
	return (8);
}

void PhoneBook::displayTruncate(std::string sub) {
	if (sub.size() < 10)
		std::cout << std::setw(10) << sub;
	else
		std::cout << sub.substr(0, 9) << ".";
}

void PhoneBook::displayContact() {
	// truncate and display all contact
	std::string sub;

	for (int i = 0; i < 8; i++) {
		if (PhoneBook::contact[i].getFirstName().empty())
			continue;
		std::cout << std::setw(10) << i << "|";
		sub = PhoneBook::contact[i].getFirstName();
		PhoneBook::displayTruncate(sub);
		std::cout << "|";
		sub = PhoneBook::contact[i].getLastName();
		PhoneBook::displayTruncate(sub);
		std::cout << "|";
		sub = PhoneBook::contact[i].getNickName();
		PhoneBook::displayTruncate(sub);
		std::cout << std::endl;
	}

	// display contact requested
	std::string buff;
	int id;
	int	contactMax = getContactNumber();

	if (PhoneBook::contact[0].getFirstName().empty()) {
		std::cerr << "Contact list empty: please add a new contact first" << std::endl;
		return;
	}
	std::cout << "Enter id:" << std::endl;
	std::cin >> buff;
	if (buff.size() != 1 || !isdigit(buff[0])) {
		std::cerr << "Invalid id: please enter a number between 0 and " << contactMax - 1 << std::endl;
		return ;
	}
	id = std::atoi(buff.c_str());
	if (id < 0 || id > contactMax - 1) {
		std::cerr << "Invalid id: please enter a number between 0 and " << contactMax - 1 << std::endl;
		return ;
	}
	std::cout << PhoneBook::contact[id].getId() << std::endl;
	std::cout << PhoneBook::contact[id].getFirstName() << std::endl;
	std::cout << PhoneBook::contact[id].getLastName() << std::endl;
	std::cout << PhoneBook::contact[id].getNickName() << std::endl;
}
