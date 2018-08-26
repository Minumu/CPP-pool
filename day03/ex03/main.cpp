// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:06:42 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:06:44 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
    srand(time(NULL));

	std::cout << " ----- SCAVTRAP ---- " << std::endl;
	std::cout << "Create default robot:" << std::endl;
	ScavTrap trap1("Elvis");
	std::cout << "---------------------" << std::endl;
	std::cout << "Create copy robot:" << std::endl;
	ScavTrap trap2(trap1);
	std::cout << "---------------------" << std::endl;

	std::cout << "Set a name" << std::endl;
	trap1.setName("Dipsy");
	std::cout << "Get a name: " << std::endl;
	std::cout << trap1.getName() << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout << "ranged attack starts" << std::endl;
	trap1.rangedAttack("La-La");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap2.takeDamage(20);
	std::cout << "---------------------" << std::endl;
	std::cout << "melee attack starts" << std::endl;
	trap1.meleeAttack("La-La");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap2.takeDamage(30);
	std::cout << "---------------------" << std::endl;

	std::cout << "Killing time" << std::endl;
	trap2.takeDamage(20000);

	std::cout << "Repairing..." << std::endl;
	trap2.beRepaired(40);
	std::cout << "---------------------" << std::endl;

	std::cout << "Random attacks time!" << std::endl;
	trap2.challengeNewcomer();
	std::cout << "---------------------" << std::endl;
	trap2.challengeNewcomer();
	std::cout << "---------------------" << std::endl;
	trap2.challengeNewcomer();
	std::cout << "---------------------" << std::endl;
	trap2.challengeNewcomer();
	std::cout << "---------------------" << std::endl;
	trap2.challengeNewcomer();
	std::cout << "---------------------" << std::endl;
	trap1.takeDamage(25);
	std::cout << "---------------------" << std::endl;
	std::cout << "Well played. ----- SCAVTRAP ----" << std::endl;


	std::cout << " ----- FRAGTRAP ---- " << std::endl;
	std::cout << "Create default robot:" << std::endl;
	FragTrap	trap11("Bimba");
	std::cout << "---------------------" << std::endl;
	std::cout << "Create copy robot:" << std::endl;
	FragTrap	trap22(trap11);
	std::cout << "---------------------" << std::endl;

	std::cout << "Set a name" << std::endl;
	trap11.setName("Tinky");
	std::cout << "Get a name: " << std::endl;
	std::cout << trap11.getName() << std::endl;
	std::cout << "---------------------" << std::endl;

	std::cout << "ranged attack starts" << std::endl;
	trap11.rangedAttack("Bobby");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap22.takeDamage(20);
	std::cout << "---------------------" << std::endl;
	std::cout << "melee attack starts" << std::endl;
	trap11.meleeAttack("Bobby");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap22.takeDamage(30);
	std::cout << "---------------------" << std::endl;

	std::cout << "Killing time" << std::endl;
	trap22.takeDamage(20000);
	std::cout << "---------------------" << std::endl;

	std::cout << "Repairing..." << std::endl;
	trap22.beRepaired(40);
	std::cout << "---------------------" << std::endl;

	std::cout << "Random attacks time!" << std::endl;
	trap22.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap22.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap22.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap22.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap22.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap11.takeDamage(25);
	std::cout << "---------------------" << std::endl;
	std::cout << "Well played. ----- FRAGTRAP ----" << std::endl;


	std::cout << "--------------NinjaTrap-------------" << std::endl;
	NinjaTrap	trap3("ShadowBoom");
	std::cout << "Create copy robot:" << std::endl;
	NinjaTrap	trap4(trap3);
	std::cout << "---------------------" << std::endl;

	std::cout << std::endl << 	"--------Starting secret attack...--------" << std::endl;
	trap3.ninjaShoebox(trap11);
	trap3.ninjaShoebox(trap1);
	trap3.ninjaShoebox(trap4);

	std::cout << "Well played. ----- NINJATRAP ----" << std::endl;
	return 0;
}
