// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:02:10 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:02:14 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>

class ScavTrap {

private:
    unsigned int _HP;
    unsigned int _maxHP;
    unsigned int _energy;
    unsigned int _maxEnergy;
    unsigned int _level;
    std::string  _name;
    unsigned int _meleeDamage;
    unsigned int _rangedDamage;
    unsigned int _armorReduction;

public:
    ScavTrap(void);
    ScavTrap(std::string const & name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);
    ScavTrap & operator=(ScavTrap const & rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(void);
    void setName(std::string const name);
    std::string	getName(void) const;
};

#endif
