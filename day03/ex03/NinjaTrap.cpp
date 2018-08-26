// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:06:29 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:06:31 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap()
{
    _HP = 60;
    _maxHP = 60;
    _energy = 120;
    _maxEnergy = 120;
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armorReduction = 0;
    std::cout << "It's ninja time!" << std::endl;
    setName("ShadowBoom");
    return;
}

NinjaTrap::NinjaTrap(std::string const name): ClapTrap(name)
{
    _HP = 60;
    _maxHP = 60;
    _energy = 120;
    _maxEnergy = 120;
    _meleeDamage = 60;
    _rangedDamage = 5;
    _armorReduction = 0;
    std::cout << "Recompiling my ninja code!" << std::endl;
    setName(name);
    return;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) : ClapTrap(src)
{
    std::cout << "Look out everybody! I'm a ninja!!!" << std::endl;
    *this = src;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Good thing I don't have a soul! Ninja down!" << std::endl;
    return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
    std::cout << "Holy ninja, that worked?" << std::endl;
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

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
    std::cout << this->getName() << " is using FragTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
    std::cout << this->getName() << " is using ScavTrap " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
    std::cout << this->getName() << " is using NinjaTrap " << target.getName() << std::endl;
}

