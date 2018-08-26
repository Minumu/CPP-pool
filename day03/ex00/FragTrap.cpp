// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 21:59:13 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 21:59:15 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(): _HP(100), _maxHP(100), _energy(100), _maxEnergy(100), _level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "This time it'll be awesome, I promise!" << std::endl;
	this->setName("Bimba");
	return;
}

FragTrap::FragTrap(std::string const name): _HP(100), _maxHP(100), _energy(100), _maxEnergy(100), _level(1), _meleeDamage(30), _rangedDamage(20), _armorReduction(5)
{
	std::cout << "Recompiling my combat code!" << std::endl;
	setName(name);
	return;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Look out everybody! Things are about to get awesome!" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "Good thing I don't have a soul! Robot down!" << std::endl;
	return;
}

void FragTrap::setName(std::string const name)
{
	this->_name = name;
	return;
}

std::string	FragTrap::getName() const
{
	return (this->_name);
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

void FragTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
		std::cout << "FR4G-TP " << this->getName() << ": My robotic flesh! AAHH! I guess I'm dead. My HP is " << this->_HP << std::endl;
	else if (amount <= this->_armorReduction)
		std::cout << "FR4G-TP " << this->getName() <<": You call yourself a badass? Your attack is a joke! My HP is still " << this->_HP << std::endl;
	else if (amount >= (this->_HP + this->_armorReduction))
	{
		this->_HP = 0;
		std::cout << "FR4G-TP " << this->getName() << ": That looks like it hurts! I guess I'm dead. My HP is " << this->_HP << std::endl;
	}
	else
	{
		this->_HP = this->_HP - amount;
		std::cout << "FR4G-TP " << this->getName() << ": Hit me, baby! Ooooh, hurts. My HP is " << this->_HP << " and armor reduction " << this->_armorReduction << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HP == this->_maxHP)
		std::cout << "FR4G-TP " << this->getName() << " has full health: " << this->_HP << std::endl;
	else if (this->_HP + amount > this->_maxHP)
	{
		this->_HP = this->_maxHP;
		std::cout << "FR4G-TP " << this->getName() << ": Health over here! Now I feel all of my health... HP is " << this->_HP << std::endl;
	}
	else
	{
		this->_HP = this->_HP + amount;
		std::cout << "FR4G-TP " << this->getName() << ": I found health! HP is " << this->_HP << std::endl;
	}
}

void    FragTrap::vaulthunter_dot_exe(std::string const & target) 
{

	std::string		Attacks[] = {"Hyperion Punch", "Cryogenic Exhaust Manifold", "Funzerker", "Mechromagician", "Laser Inferno"};

	if (this->_energy >= 25)
	{
		this->_energy -= 25;
		std::cout << "FR4G-TP " << this->getName() << " uses " << Attacks[(rand() % 5)] << " on " << target << " and has now " << this->_energy  << " energy points " << std::endl;
	}
	else if (this->_energy < 25 && this->_energy > 0)
		std::cout << "FR4G-TP " << this->getName() << " can't do this, has now " << this->_energy << " energy points " << std::endl;
	else 
		std::cout << "FR4G-TP " << this->getName() << " is out of energy and has now " << this->_energy << " energy points " << std::endl;
}
