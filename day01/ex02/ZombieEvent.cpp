// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:57:12 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:57:34 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent()
{
	return;
}

ZombieEvent::~ZombieEvent()
{
	return;
}

Zombie* ZombieEvent::newZombie(std::string zombieName)
{
	Zombie *zombie = new Zombie;
	zombie->zombieName = zombieName;
	return (zombie);
}

void ZombieEvent::setZombieType(std::string *type, std::string zombieType)
{
	*type = zombieType;
}
