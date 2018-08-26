// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:12:49 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:12:51 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

public:
	Weapon& weapon;
	HumanA(std::string, Weapon & w);
	~HumanA();
	void attack(void);

private:
	std::string name;
};

#endif
