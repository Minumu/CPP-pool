// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:06:13 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:06:15 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPointer = &str;
	std::string& strRef = str;

	std::cout << "Pointer: " << *strPointer << std::endl;
	std::cout << "Reference: " << strRef << std::endl;
	return (0);
}
