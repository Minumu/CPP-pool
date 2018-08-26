// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/19 20:24:47 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/19 20:25:33 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <cctype>

int		main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			for (int j = 0; av[i][j]; j++)
			{
				if (av[i][j] >= 97 && av[i][j] <= 122)
					std::cout << (char)toupper(av[i][j]);
				else
					std::cout << av[i][j];
			}
		}
		std::cout << std::endl;
	}
}

