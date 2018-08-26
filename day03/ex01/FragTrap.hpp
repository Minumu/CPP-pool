// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:01:18 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:01:23 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>

class FragTrap {

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
	FragTrap(void);
	FragTrap(std::string const name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);
	FragTrap & operator=(FragTrap const & rhs);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);
	void setName(std::string const name);
	std::string	getName(void) const;
};

#endif
