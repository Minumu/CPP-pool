// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:01:39 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:01:41 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): _HP(100), _maxHP(100), _energy(50), _maxEnergy(50), _level(1), _meleeDamage(20), _rangedDamage(15), _armorReduction(3)
{
    std::cout << "Let's get this party started!" << std::endl;
    this->setName("Bimba");
    return;
}

ScavTrap::ScavTrap(std::string const & name): _HP(100), _maxHP(100), _energy(50), _maxEnergy(50), _level(1), _meleeDamage(20), _rangedDamage(15), _armorReduction(3)
{
    std::cout << "Hey everybody! Check out my package!" << std::endl;
    setName(name);
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "Does this mean I can start dancing? Pleeeeeeaaaaase?" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "I'll die the way I lived: annoying!" << std::endl;
    return;
}

void ScavTrap::setName(std::string const name)
{
    this->_name = name;
    return;
}

std::string	ScavTrap::getName() const
{
    return (this->_name);
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

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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
