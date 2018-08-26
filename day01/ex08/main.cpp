// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:34:36 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:34:49 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int		main()
{
	Human	hero;

	hero.action("melee", "Uther");
	hero.action("ranged", "Gul'dan");
	hero.action("shout", "Rexxar");
	return (0);
}
