// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:09:10 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:09:17 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {

public:
	Brain(void);
	~Brain(void);
	std::string identify(void) const;
};

#endif
