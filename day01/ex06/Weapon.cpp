// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:13:50 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:13:52 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType)
{
	return;
}

Weapon::~Weapon()
{
	return;
}

const std::string & Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string weaponType)
{
	this->type = weaponType;
}
