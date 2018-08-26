// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:02:54 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:03:12 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N) : num(N)
{
	int idxName;
	int idxType;

	zombies = new Zombie[num];
	std::string randomZombie[10] = {"Brienne", "Catelyn", "Sansa", "Cersei", "Arya", "Robb", "Petyr", "Tyrion", "Jaime", "Eddard"};
	std::string randomZombieType[5] = {"Walking", "Runner", "Voodoo", "Screamer", "Stalker"};
	for (int i = 0; i < num; i++)
	{
		idxName = rand() % 10;
		idxType = rand() % 5;
		this->zombies[i].zombieName = randomZombie[idxName];
		this->zombies[i].zombieType = randomZombieType[idxType];
		this->zombies[i].announce();
	}
	return;
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombies;
	std::cout << "All zombies are gone..." << std::endl;
	return;
}

