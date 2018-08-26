// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:47:34 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:51:09 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony()
{
	this->_ponyName.clear();
	this->_ponyColor.clear();
	std::cout << "We are starting to create a pony... " << std::endl;
	return;
}

Pony::~Pony()
{
	this->_ponyName.clear();
	this->_ponyColor.clear();
	std::cout << "And... We killed our pony. We are murderers, man" << std::endl;
	return;
}
