// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/28 21:08:11 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/28 21:09:10 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

int main(void)
{
	std::cout << "----Creating an int array with 3 elements----" << std::endl;
	unsigned int size = 3;
	Array<int> arr = Array<int>(size);

	arr[0] = -23;
	arr[1] = 32;
	arr[2] = -42;
	std::cout << "----Get size----" << std::endl;
	std::cout << arr.size() << std::endl;
	std::cout << "----Try to get out of range element----" << std::endl;
	try
	{
		arr[3] = 0;
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "----Creating a string array with 5 elements----" << std::endl;
	size = 5;
	Array<std::string> array = Array<std::string>(size);
	array[0] = "Targaryen";
	array[1] = "Stark";
	array[2] = "Lannister";
	array[3] = "Baratheon";
	array[4] = "Martell";
	std::cout << "----Get size ----" << std::endl;
	std::cout << array.size() << std::endl;
	std::cout << "----Try to get out of range element----" << std::endl;
	try
	{
		array[5] = "Bolton";
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << std::endl;
	}

	Array<> byDefault = Array<>(0);
	std::cout << "----Default constructor (char array)----" << std::endl;
	std::cout << "----Get size ----" << std::endl;
	std::cout << byDefault.size() << std::endl;
	std::cout << "----Try to get out of range element----" << std::endl;
	try
	{
		byDefault[0] = 'y';
	}
	catch (std::out_of_range e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
