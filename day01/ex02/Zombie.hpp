// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:56:34 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:57:05 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie {

public:
	Zombie(void);
	~Zombie(void);
	void		announce(void);
	std::string zombieName;
	std::string zombieType;
};

#endif
