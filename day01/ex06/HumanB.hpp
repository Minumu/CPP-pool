// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:13:27 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:13:34 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

public:
	HumanB(std::string n);
	~HumanB();
	Weapon *weapon;
	void attack(void);
	void setWeapon(Weapon &w);

private:
	std::string name;
};

#endif
