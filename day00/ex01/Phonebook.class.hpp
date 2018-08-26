// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:31:31 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:32:19 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "Contacts.class.hpp"

class Phonebook {

public:
	Phonebook(void);
	~Phonebook(void);

private:
	Contacts	_contacts[8];
	int			_idContact;
	std::string	command;
	void		add(void);
	void		search(void);
	void		printContacts(void);
	void		printOneContact(void);
	void		checkLength(std::string);
	void		start(void);
};


#endif
