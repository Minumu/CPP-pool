// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:03:20 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:03:23 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    _energy = 50;
    _maxEnergy = 50;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armorReduction = 3;
    std::cout << "Let's get this party started!" << std::endl;
    setName("Bimba");
    return;
}

ScavTrap::ScavTrap(std::string const name): ClapTrap(name)
{
    _energy = 50;
    _maxEnergy = 50;
    _meleeDamage = 20;
    _rangedDamage = 15;
    _armorReduction = 3;
    std::cout << "Hey everybody! Check out my package!" << std::endl;
    setName(name);
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
    std::cout << "Does this mean I can start dancing? Pleeeeeeaaaaase?" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I'll die the way I lived: annoying!" << std::endl;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Wow, that actually worked?" << std::endl;
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

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "Eat bomb, baddie!" << std::endl;
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at range, causing " << this->_rangedDamage << " point of damage." << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "Holy moly!" << std::endl;
    std::cout << "FR4G-TP " << this->getName() << " attacks " << target << " at melee, causing " << this->_meleeDamage << " point of damage." << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
    std::string		Challenge[] = {"Hey! Over Here!", "12 Days of Pandora", "Haiku Hitman", "King of the Hill", "Extreme Orc Makeover"};

    if (this->_energy >= 25)
    {
        this->_energy -= 25;
        std::cout << "FR4G-TP " << this->getName() << " create '" << Challenge[(rand() % 5)] << "' challenge and has now " << this->_energy  << " energy points " << std::endl;
    }
    else if (this->_energy < 25 && this->_energy > 0)
        std::cout << "FR4G-TP " << this->getName() << " can't do this, has now " << this->_energy << " energy points " << std::endl;
    else
        std::cout << "FR4G-TP " << this->getName() << " is out of energy and has now " << this->_energy << " energy points " << std::endl;
}
