// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/22 22:06:34 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/22 22:06:36 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:
    NinjaTrap(void);
    NinjaTrap(std::string const name);
    NinjaTrap(NinjaTrap const & src);
    ~NinjaTrap(void);

    NinjaTrap &	operator=(NinjaTrap const & rhs);
    void ninjaShoebox(FragTrap const & target);
    void ninjaShoebox(ScavTrap const & target);
    void ninjaShoebox(NinjaTrap const & target);
};

#endif
