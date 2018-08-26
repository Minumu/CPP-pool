// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:14:04 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:14:10 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon {

public:
	Weapon(std::string w);
	~Weapon(void);
	std::string const &getType();
	void		setType(std::string t);

private:
	std::string type;
};

#endif
