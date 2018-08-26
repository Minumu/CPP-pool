// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:13:14 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:13:16 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName)
{
	return;
}

HumanB::~HumanB()
{
	return;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon1)
{
	this->weapon = &weapon1;
}
