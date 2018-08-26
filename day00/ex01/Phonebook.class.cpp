// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:31:04 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:31:26 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.class.hpp"
#include "Contacts.class.hpp"

Phonebook::Phonebook()
{
	this->_idContact = 0;
	start();
}

Phonebook::~Phonebook()
{
	return;
}

void Phonebook::start()
{
	std::cout << "Hello! This is an awesome phonebook!" << std::endl;
	std::cout << "You can add 8 contacts. Seriously, it's maximum that I can." << std::endl;
	std::cout << "I know 'ADD', 'SEARCH' and 'EXIT' commands. Hope, you understand what they mean." << std::endl;
	std::cout << "Let's go! Write your command! I'm waiting..." << std::endl;
	while (1)
	{
		std::cout << "command: ";
		std::getline(std::cin, this->command);
		if (this->command.compare("ADD") == 0)
			this->add();
		else if (this->command.compare("SEARCH") == 0)
			this->search();
		else if (this->command.compare("EXIT") == 0)
			exit(0);
		else
			std::cout << "Only three commands are available: 'ADD', 'SEARCH', 'EXIT'. Try again" << std::endl;
	}
}

void Phonebook::add()
{
	if (this->_idContact < 8)
	{
		std::cout << "Contact #" << this->_idContact + 1 << std::endl;
		_contacts[this->_idContact].setFirstName();
		_contacts[this->_idContact].setLastName();
		_contacts[this->_idContact].setNickname();
		_contacts[this->_idContact].setLogin();
		_contacts[this->_idContact].setPostalAddress();
		_contacts[this->_idContact].setEmailAddress();
		_contacts[this->_idContact].setPhoneNumber();
		_contacts[this->_idContact].setBirthdayDate();
		_contacts[this->_idContact].setFavoriteMeal();
		_contacts[this->_idContact].setUnderwearColor();
		_contacts[this->_idContact].setDarkestSecret();
		this->_idContact++;
	}
	else
		std::cout << "Oops, it's ninth contact. I can't add it. I told you." << std::endl;
}

void Phonebook::search()
{
	if (this->_idContact > 0)
	{
		this->printContacts();
		this->printOneContact();
	}
	else
	{
		std::cout << "This awesome phonebook (it's me, yes) doesn't have any contact. You need to add at least one." << std::endl;
	}
}

void Phonebook::printContacts()
{
	for (int i = 0; i < this->_idContact; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		this->checkLength(this->_contacts[i].getFirstName());
		this->checkLength(this->_contacts[i].getLastName());
		this->checkLength(this->_contacts[i].getNickname());
		std::cout << std::endl;
	}
}

void Phonebook::checkLength(std::string input)
{
	if (input.length() > 10)
	{
		std::cout << input.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << std::setw(10) << input << "|";
	}
}

void Phonebook::printOneContact()
{
	std::string idCont;
	int id;

	std::cout << "You can see full information about one of this contacts." << std::endl;
	while (1)
	{
		std::cout <<  "Enter ID of the desired one: ";
		std::getline(std::cin, idCont);
		if (idCont.length() == 1 && std::isdigit(idCont[0]))
		{
			id = atoi(idCont.c_str());
			if (id > 0 && id <= this->_idContact)
			{
				std::cout << "First name     :" << this->_contacts[id - 1].getFirstName() << std::endl;
				std::cout << "Last name      :" << this->_contacts[id - 1].getLastName() << std::endl;
				std::cout << "Nick name      :" << this->_contacts[id - 1].getNickname() << std::endl;
				std::cout << "Login          :" << this->_contacts[id - 1].getLogin() << std::endl;
				std::cout << "Postal address :" << this->_contacts[id - 1].getPostalAddress() << std::endl;
				std::cout << "Email address  :" << this->_contacts[id - 1].getEmailAddress() << std::endl;
				std::cout << "Phone number   :" << this->_contacts[id - 1].getPhoneNumber() << std::endl;
				std::cout << "Birthday date  :" << this->_contacts[id - 1].getBirthdayDate() << std::endl;
				std::cout << "Favorite meal  :" << this->_contacts[id - 1].getFavoriteMeal() << std::endl;
				std::cout << "Underwear color:" << this->_contacts[id - 1].getUnderwearColor() << std::endl;
				std::cout << "Darkest secret :" << this->_contacts[id - 1].getDarkestSecret() << std::endl;
				return;
			}
			else
			{
				std::cout << "Ooops, seems like you enter invalid ID. Try again. I'm patient..." << std::endl;
			}
		}
		else
		{
			std::cout << "Ooops, seems like you enter invalid ID. Try again. I'm patient..." << std::endl;
		}
	}
}
