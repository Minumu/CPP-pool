// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:10:02 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:10:09 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain()
{
	return;
}

Brain::~Brain()
{
	return;
}

std::string Brain::identify() const
{
	std::stringstream strstream;
	strstream << this;
	return strstream.str();
}
