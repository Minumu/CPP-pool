// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:09:26 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:09:28 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human {

	Brain const brain;
public:
	Human(void);
	~Human(void);
	std::string identify(void);
	Brain const &getBrain(void);
};

#endif
