// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:09:35 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:11:10 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
	return;
}

Human::~Human()
{
	return;
}

std::string Human::identify()
{
	return brain.identify();
}

Brain const& Human::getBrain()
{
	return brain;
}
