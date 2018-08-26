// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/28 21:06:52 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/28 21:07:06 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template< typename T >
void iter(T *array, unsigned int len, void (*f)(T))
{
	for (unsigned int i = 0; i < len; i++)
	{
		f(array[i]);
	}
}

template< typename T >
void printElementOfArray(T elem)
{
	std::cout << elem << std::endl;
}

int main(void)
{
	std::string array[] = {"Targaryen", "Stark", "Lannister", "Baratheon", "Martell"};
	int arr[] = {31, -10, 0, 10023, 47, 23, -32};
	char arrr[] = {'A', 'B', 'C', 'D'};

	std::cout << "--------------------------" << std::endl;
	std::cout << "Elements of string array: " << std::endl;
	::iter(array, 5, ::printElementOfArray);
	std::cout << "--------------------------" << std::endl;

	std::cout << "Elements of int array: " << std::endl;
	::iter(arr, 7, ::printElementOfArray);
	std::cout << "--------------------------" << std::endl;

	std::cout << "Elements of char array: " << std::endl;
	::iter(arrr, 4, ::printElementOfArray);
	std::cout << "--------------------------" << std::endl;
}
