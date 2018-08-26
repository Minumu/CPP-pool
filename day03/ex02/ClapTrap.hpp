// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:02:48 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:02:50 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap {

protected:
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
    ClapTrap(void);
    ClapTrap(std::string const name);
    ClapTrap(ClapTrap const & src);
    ~ClapTrap(void);

    ClapTrap & operator=(ClapTrap const & rhs);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setName(std::string const name);
    std::string	getName(void) const;
};

#endif
