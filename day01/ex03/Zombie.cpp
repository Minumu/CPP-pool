// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:02:23 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:02:26 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	return;
}

void Zombie::announce()
{
	std::cout << "<" << this->zombieName << " (" << this->zombieType << ")> " << "Braiiiiiinnnnsss..." << std::endl;
}
