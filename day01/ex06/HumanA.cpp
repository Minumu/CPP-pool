// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:12:34 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:12:36 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string weaponName, Weapon & myWeapon) : weapon(myWeapon), name(weaponName)
{
	return;
}

HumanA::~HumanA()
{
	return;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
