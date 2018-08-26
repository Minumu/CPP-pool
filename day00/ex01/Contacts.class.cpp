// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contacts.class.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:32:51 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:33:13 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contacts.class.hpp"
#include "Phonebook.class.hpp"

Contacts::Contacts()
{
	return;
}

Contacts::~Contacts()
{
	return;
}

void Contacts::setFirstName()
{
	std::cout << "Enter first name: ";
	std::getline(std::cin, this->_firstName);
}

void Contacts::setLastName()
{
	std::cout << "Enter last name: ";
	std::getline(std::cin, this->_lastName);
}

void Contacts::setNickname()
{
	std::cout << "Enter nickname: ";
	std::getline(std::cin, this->_nickname);
}

void Contacts::setLogin()
{
	std::cout << "Enter login: ";
	std::getline(std::cin, this->_login);
}

void Contacts::setPostalAddress()
{
	std::cout << "Enter postal address: ";
	std::getline(std::cin, this->_postalAddress);
}

void Contacts::setEmailAddress()
{
	std::cout << "Enter email address: ";
	std::getline(std::cin, this->_emailAddress);
}

void Contacts::setPhoneNumber()
{
	std::cout << "Enter phone number: ";
	std::getline(std::cin, this->_phoneNumber);
}

void Contacts::setBirthdayDate()
{
	std::cout << "Enter birthday date: ";
	std::getline(std::cin, this->_birthdayDate);
}

void Contacts::setFavoriteMeal()
{
	std::cout << "Enter favorite meal: ";
	std::getline(std::cin, this->_favoriteMeal);
}

void Contacts::setUnderwearColor()
{
	std::cout << "Enter underwear color: ";
	std::getline(std::cin, this->_underwearColor);
}

void Contacts::setDarkestSecret()
{
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
}

std::string Contacts::getFirstName() const
{
	return this->_firstName;
}

std::string Contacts::getLastName() const
{
	return this->_lastName;
}

std::string Contacts::getNickname() const
{
	return this->_nickname;
}

std::string Contacts::getLogin() const
{
	return this->_login;
}

std::string Contacts::getPostalAddress() const
{
	return this->_postalAddress;
}

std::string Contacts::getEmailAddress() const
{
	return this->_emailAddress;
}

std::string Contacts::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string Contacts::getBirthdayDate() const
{
	return this->_birthdayDate;
}

std::string Contacts::getFavoriteMeal() const
{
	return this->_favoriteMeal;
}

std::string Contacts::getUnderwearColor() const
{
	return this->_underwearColor;
}

std::string Contacts::getDarkestSecret() const
{
	return this->_darkestSecret;
}
