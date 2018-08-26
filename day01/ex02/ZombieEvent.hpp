// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:57:57 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:38:56 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>
#include <cstdlib>

class ZombieEvent {

public:
	ZombieEvent(void);
	~ZombieEvent(void);
	void	setZombieType(std::string *type, std::string zombieType);
	Zombie* newZombie(std::string name);
};

#endif
