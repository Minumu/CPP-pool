// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contacts.class.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:32:28 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:32:34 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONTACTS_CLASS_HPP
#define CONTACTS_CLASS_HPP

#include <iostream>
#include <string>

class Contacts {

public:
	Contacts(void);
	~Contacts(void);
	void		setFirstName(void);
	void		setLastName(void);
	void		setNickname(void);
	void		setLogin(void);
	void		setPostalAddress(void);
	void		setEmailAddress(void);
	void		setPhoneNumber(void);
	void		setBirthdayDate(void);
	void		setFavoriteMeal(void);
	void		setUnderwearColor(void);
	void		setDarkestSecret(void);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getLogin(void) const;
	std::string	getPostalAddress(void) const;
	std::string	getEmailAddress(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getBirthdayDate(void) const;
	std::string	getFavoriteMeal(void) const;
	std::string	getUnderwearColor(void) const;
	std::string	getDarkestSecret(void) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string	_login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favoriteMeal;
	std::string _underwearColor;
	std::string _darkestSecret;
};

#endif
