// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:02:40 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:02:42 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _HP(100), _maxHP(100), _level(1)
{
    std::cout << "ClapTrap default constructor" << std::endl;
    this->setName("Bimba");
    return;
}

ClapTrap::ClapTrap(std::string const name): _HP(100), _maxHP(100), _level(1)
{
    std::cout << "ClapTrap default constructor with setName" << std::endl;
    setName(name);
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "ClapTrap copy constructor" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap default destructor" << std::endl;
    return;
}

void ClapTrap::setName(std::string const name)
{
    this->_name = name;
    return;
}

std::string	ClapTrap::getName() const
{
    return (this->_name);
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    /*std::cout << "Holy crap, that worked?" << std::endl;*/
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_HP == 0)
        std::cout << "CP4G-TP " << this->getName() << ": My robotic flesh! AAHH! I guess I'm dead. My HP is " << this->_HP << std::endl;
    else if (amount <= this->_armorReduction)
        std::cout << "CP4G-TP " << this->getName() <<": You call yourself a badass? Your attack is a joke! My HP is still " << this->_HP << std::endl;
    else if (amount >= (this->_HP + this->_armorReduction))
    {
        this->_HP = 0;
        std::cout << "CP4G-TP " << this->getName() << ": That looks like it hurts! I guess I'm dead. My HP is " << this->_HP << std::endl;
    }
    else
    {
        this->_HP = this->_HP - amount;
        std::cout << "CP4G-TP " << this->getName() << ": Hit me, baby! Ooooh, hurts. My HP is " << this->_HP << " and armor reduction " << this->_armorReduction << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HP == this->_maxHP)
        std::cout << "CP4G-TP " << this->getName() << " has full health: " << this->_HP << std::endl;
    else if (this->_HP + amount > this->_maxHP)
    {
        this->_HP = this->_maxHP;
        std::cout << "CP4G-TP " << this->getName() << ": Health over here! Now I feel all of my health... HP is " << this->_HP << std::endl;
    }
    else
    {
        this->_HP = this->_HP + amount;
        std::cout << "CP4G-TP " << this->getName() << ": I found health! HP is " << this->_HP << std::endl;
    }
}
