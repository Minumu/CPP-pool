// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: tshevchu <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2018/06/21 20:47:01 by tshevchu          #+#    #+#             //
//   Updated: 2018/06/21 21:10:30 by tshevchu         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.class.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void): _value(0)
{
	/*std::cout << "Default constructor called" << std::endl;*/
	return;
}

Fixed::~Fixed(void)
{
	/*std::cout << "Destructor called" << std::endl;*/
	return;
}

Fixed::Fixed(int const n)
{
	/*std::cout << "Int constructor called" << std::endl;*/
	setRawBits(n << _fractBits);
	return;
}

Fixed::Fixed(float const n)
{
	/*std::cout << "Float constructor called" << std::endl;*/
	setRawBits(roundf(n * (1 << _fractBits)));
	return;
}

Fixed::Fixed(Fixed const & src)
{
	/*std::cout << "Copy constructor called" << std::endl;*/
	*this = src;
	return;
}

bool	Fixed::operator>(Fixed const & rhs)
{
	return (this->_value > rhs.getRawBits());
}

bool	Fixed::operator<(Fixed const & rhs)
{
    return (this->_value < rhs.getRawBits());
}

bool	Fixed::operator>=(Fixed const & rhs)
{
    return (this->_value >= rhs.getRawBits());
}

bool	Fixed::operator<=(Fixed const & rhs)
{
    return (this->_value <= rhs.getRawBits());
}

bool	Fixed::operator==(Fixed const & rhs)
{
    return (this->_value == rhs.getRawBits());
}

bool	Fixed::operator!=(Fixed const & rhs)
{
    return (this->_value != rhs.getRawBits());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	Fixed fixed;
	fixed.setRawBits(this->getRawBits() + rhs.getRawBits());
	return(fixed);
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	Fixed fixed;
	fixed.setRawBits(this->getRawBits() - rhs.getRawBits());
	return(fixed);
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	Fixed fixed;
	fixed.setRawBits(this->getRawBits() * rhs.getRawBits() >> this->_fractBits);
	return(fixed);
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	Fixed fixed;
	fixed.setRawBits(this->getRawBits() / (rhs.getRawBits() >> this->_fractBits));
	return(fixed);
}

Fixed &	Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed &	Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	fixed;

	fixed = *this;
	this->_value++;
	return (fixed);
}

Fixed	Fixed::operator--(int)
{
	Fixed	fixed;

	fixed = *this;
	this->_value--;
	return (fixed);
}  

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
	return;
}

int Fixed::getRawBits() const
{
	return this->_value;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	/*std::cout << "Assignation operator called" << std::endl;*/
	this->_value = rhs.getRawBits();
	return *this;
}

int		Fixed::toInt(void) const
{
	return (getRawBits() >> this->_fractBits);
}

float	Fixed::toFloat(void) const
{
	float	n;

	n = getRawBits();
	return n / (1 << this->_fractBits);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return o;
}

const Fixed & 	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed & 	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

Fixed & 	Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed & 	Fixed::max(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}
