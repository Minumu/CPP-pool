// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:03:00 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:03:02 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	_energy = 100;
	_maxEnergy = 100;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armorReduction = 5;
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	setName("Bimba");
	return;
}

FragTrap::FragTrap(std::string const name): ClapTrap(name)
{
	_energy = 100;
	_maxEnergy = 100;
	_meleeDamage = 30;
	_rangedDamage = 20;
	_armorReduction = 5;
	std::cout << "Recompiling my combat code!" << std::endl;
	setName(name);
	return;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "Good thing I don't have a soul! Robot down!" << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "Holy crap, that worked?" << std::endl;
	this->_name = rhs.getName();
	this->_HP = rhs._HP;
	this->_maxHP = rhs._maxHP;
	this->_energy = rhs._energy;
	this->_maxEnergy = rhs._maxEnergy;
	this->_level = rhs._level;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armorReduction = rhs._armorReduction;
	return *this;
}

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "You're listening to 'Short-Range Damage Radio.'" << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_rangedDamage << " point of damage." << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "Meet professor punch!" << std::endl;
	std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at melee, causing " << this->_meleeDamage << " point of damage." << std::endl;
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) 
{

	std::string		Attacks[] = {"Hyperion Punch", "Cryogenic Exhaust Manifold", "Funzerker", "Mechromagician", "Laser Inferno"};

	if (this->_energy >= 25)
	{
		this->_energy -= 25;
		std::cout << "FR4G-TP " << this->getName() << " uses '" << Attacks[(rand() % 5)] << "' on " << target << " and has now " << this->_energy  << " energy points " << std::endl;
	}
	else if (this->_energy < 25 && this->_energy > 0)
		std::cout << "FR4G-TP " << this->getName() << " can't do this, has now " << this->_energy << " energy points " << std::endl;
	else 
		std::cout << "FR4G-TP " << this->getName() << " is out of energy and has now " << this->_energy << " energy points " << std::endl;
}
