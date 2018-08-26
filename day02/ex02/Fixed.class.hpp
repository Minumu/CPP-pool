// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 20:47:16 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/21 20:47:21 by tshevchu         ###   ########.fr       //
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
	Fixed(Fixed const & src);

	Fixed & operator=(Fixed const & rhs);
	bool operator<(Fixed const & rhs);
	bool operator>(Fixed const & rhs);
	bool operator<=(Fixed const & rhs);
	bool operator>=(Fixed const & rhs);
	bool operator==(Fixed const & rhs);
	bool operator!=(Fixed const & rhs);

	Fixed operator+(Fixed const & rhs);
	Fixed operator-(Fixed const & rhs);
	Fixed operator*(Fixed const & rhs);
	Fixed operator/(Fixed const & rhs);

	Fixed &	operator++(void);
	Fixed	operator++(int);
	Fixed &	operator--(void);
	Fixed	operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed & max(Fixed & a, Fixed & b);
	static Fixed & min(Fixed & a, Fixed & b);
	static const Fixed & max(Fixed const & a, Fixed const & b);
	static const Fixed & min(Fixed const & a, Fixed const & b);

private:
	static int const	_fractBits = 8;
	int					_value;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & i);


#endif
