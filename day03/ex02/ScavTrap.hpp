// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:03:42 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:03:44 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <cstdlib>

class ScavTrap : public ClapTrap{

public:
    ScavTrap(void);
    ScavTrap(std::string const name);
    ScavTrap(ScavTrap const & src);
    ~ScavTrap(void);
    ScavTrap & operator=(ScavTrap const & rhs);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void challengeNewcomer(void);
};

#endif
