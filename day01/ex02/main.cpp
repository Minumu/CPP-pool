// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:58:23 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:00:16 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	randomChump(void)
{
	int i;
	int j;

	std::string randomZombie[10] = {"Brienne", "Catelyn", "Sansa", "Cersei", "Arya", "Robb", "Petyr", "Tyrion", "Jaime", "Eddard"};
	std::string randomZombieType[5] = {"Walking", "Runner", "Voodoo", "Screamer", "Stalker"};
	i = rand() % 10;
	j = rand() % 5;
	Zombie* littleZombie = new Zombie;
	ZombieEvent* zombieEvent = new ZombieEvent;
	littleZombie = zombieEvent->newZombie(randomZombie[i]);
	zombieEvent->setZombieType(&littleZombie->zombieType, randomZombieType[j]);
	littleZombie->announce();
	delete littleZombie;
	delete zombieEvent;
}

int main(void)
{
	srand (time(NULL));
	Zombie zombie;
	zombie.zombieName = "Drogon";
	zombie.zombieType = "Dragon";
	zombie.announce();
	Zombie* zombieNext = new Zombie;
	ZombieEvent* zombieEvent = new ZombieEvent;
	zombieNext = zombieEvent->newZombie("Daenerys");
	zombieEvent->setZombieType(&zombieNext->zombieType, "Dragonmother");
	zombieNext->announce();
	delete zombieNext;
	delete zombieEvent;
	randomChump();
	while(1);
	return (0);
}
