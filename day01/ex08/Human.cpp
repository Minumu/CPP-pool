// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 21:34:11 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 21:34:14 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

void Human::action(std::string const & action_name, std::string const & target)
{
	struct function
	{
		std::string action_name;
		void (Human::*fun)(std::string const &target);
	};
	function functionAction[3] = {
		{"melee", &Human::intimidatingShout},
		{"ranged", &Human::rangedAttack},
		{"shout", &Human::meleeAttack}
	};
	for (int i = 0; i < 3; i++)
	{
		if (action_name == functionAction[i].action_name)
		{
			(this->*functionAction[i].fun)(target);
		}
	}
}

void Human::meleeAttack(std::string const & target)
{
	std::cout << target << " Put your faith in the light! " << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << target << " BY THE HOLY LIGHT " << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << target << " YOU FACE JARAXXUS " << std::endl;
}
