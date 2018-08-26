// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:03:36 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:03:38 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde {

public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	Zombie*	zombies;
	int		num;
};

#endif
