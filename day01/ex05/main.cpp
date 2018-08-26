// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:10:14 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:10:17 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include "Human.hpp"

int	main(void)
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
