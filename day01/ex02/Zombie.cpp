// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:55:37 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:56:19 by tshevchu         ###   ########.fr       //
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
	std::cout << "<" << this->zombieName << " (" << this->zombieType << ")> " << "Braiiiiiiinnnssss..." << std::endl;
}
