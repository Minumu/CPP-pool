// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 20:55:07 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/21 20:55:27 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed {

public:
	Fixed(void);
	~Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &src);

	Fixed & operator=(Fixed const & rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	static int const	_fractBits = 8;
	int					_value;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);


#endif
