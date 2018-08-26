// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:00:00 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:00:03 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int		main() {
	std::cout << "Create default robot:" << std::endl;
	FragTrap	trap1("Bimba");
	std::cout << "---------------------" << std::endl;
	std::cout << "Create copy robot:" << std::endl;
	FragTrap	trap2(trap1);
	std::cout << "---------------------" << std::endl;

	srand(time(NULL));
	std::cout << "Set a name" << std::endl;
	trap1.setName("Tinky");
    std::cout << "Get a name: " << std::endl;
    std::cout << trap1.getName() << std::endl;
    std::cout << "---------------------" << std::endl;

	std::cout << "ranged attack starts" << std::endl;
	trap1.rangedAttack("Bobby");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap2.takeDamage(20);
	std::cout << "---------------------" << std::endl;
	std::cout << "melee attack starts" << std::endl;
	trap1.meleeAttack("Bobby");
	std::cout << "---------------------" << std::endl;
	std::cout << "taking damage" << std::endl;
	trap2.takeDamage(30);
	std::cout << "---------------------" << std::endl;

	std::cout << "Killing time" << std::endl;
	trap2.takeDamage(20000);
	std::cout << "---------------------" << std::endl;
	std::cout << "Trying again ... Killing time" << std::endl;
	trap2.takeDamage(2000);
	std::cout << "---------------------" << std::endl;

	std::cout << "Repairing..." << std::endl;
	trap2.beRepaired(40);
	std::cout << "---------------------" << std::endl;
	std::cout << "Trying again ... Repairing..." << std::endl;
	trap2.beRepaired(100333);
	std::cout << "---------------------" << std::endl;
	std::cout << "Trying again ... Repairing..." << std::endl;
	trap2.beRepaired(105550);
	std::cout << "---------------------" << std::endl;

	std::cout << "Random attacks time!" << std::endl;
	trap2.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap2.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
	trap2.vaulthunter_dot_exe("Dewey");
	std::cout << "---------------------" << std::endl;
    trap2.vaulthunter_dot_exe("Dewey");
    std::cout << "---------------------" << std::endl;
    trap2.vaulthunter_dot_exe("Dewey");
    std::cout << "---------------------" << std::endl;
	trap1.takeDamage(25);
	std::cout << "---------------------" << std::endl;

	std::cout << "Well played." << std::endl;
	return 0;
}
