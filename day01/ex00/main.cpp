// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:48:04 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:48:07 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony*	myLittlePonyHeap = new Pony;
	myLittlePonyHeap->setPonyColor();
	myLittlePonyHeap->setPonyName();
	std::cout << "PonyOnTheHeap with " << myLittlePonyHeap->getPonyColor() << " color and " << myLittlePonyHeap->getPonyName() << " name." << std::endl;
	delete myLittlePonyHeap;
}

void	ponyOnTheStack()
{
	Pony myLittlePonyStack;
	myLittlePonyStack.setPonyColor();
	myLittlePonyStack.setPonyName();
	std::cout << "PonyOnTheStack with " << myLittlePonyStack.getPonyColor() << " color and " << myLittlePonyStack.getPonyName() << " name." << std::endl;
}

void Pony::setPonyColor()
{
	std::cout << "Let's create our little pony. Choose color: ";
	std::getline(std::cin, this->_ponyColor);
}

void Pony::setPonyName()
{
	std::cout << "Our little pony is awesome, but doesn't have a name :(. So choose it: ";
	std::getline(std::cin, this->_ponyName);
}

std::string Pony::getPonyName() const
{
	return this->_ponyName;
}

std::string Pony::getPonyColor() const
{
	return this->_ponyColor;
}

int	main(void)
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
