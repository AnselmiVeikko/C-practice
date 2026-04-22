// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/05 11:29:31 by ahentton          #+#    #+#             //
//   Updated: 2025/06/05 11:42:29 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

//NOTE: MEMBER FUNCTIONS

int	Fixed::getRawBits(void) const
{
	return fixed_value;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)fixed_value / (1 << fract_bits));
}

int	Fixed::toInt() const
{
	return (fixed_value >> fract_bits);
}

bool	Fixed::findFractBits() const
{
	if ((getRawBits() & ((1 << fract_bits) - 1)) == 0)
		return (false);
	return (true);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

//NOTE: CONSTRUCTORS

Fixed::Fixed() : fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	fixed_value = value << fract_bits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	fixed_value = roundf(value * (1 << fract_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->fixed_value = other.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//NOTE: COMPARISON OPERATORS

bool	Fixed::operator>(Fixed const &other) const
{
	if (this->fixed_value > other.fixed_value)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &other) const
{
	if (this->fixed_value < other.fixed_value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &other) const
{
	if (this->fixed_value >= other.fixed_value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &other) const
{
	if (this->fixed_value <= other.fixed_value)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &other) const
{
	if (this->fixed_value == other.fixed_value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &other) const
{
	if (this->fixed_value != other.fixed_value)
		return (true);
	return (false);
}

//NOTE: ARITHMETIC OPERATORS

Fixed	Fixed::operator+(Fixed const &other) const
{
	Fixed	result;

	result.fixed_value = (this->fixed_value + other.fixed_value);
	return (result);
}

Fixed	Fixed::operator-(Fixed const &other) const
{
	Fixed	result;

	result.fixed_value = (this->fixed_value - other.fixed_value);
	return (result);
}

Fixed	Fixed::operator*(Fixed const &other) const
{
	Fixed	result;

	result.fixed_value = (this->fixed_value * other.fixed_value) >> fract_bits;
	return (result);
}

Fixed	Fixed::operator/(Fixed const &other) const
{
	Fixed	result;

	result.fixed_value = (this->fixed_value  << fract_bits) / other.fixed_value;
	return (result);
}

//NOTE: INCREMENT/DECREMENT OPERATORS

Fixed	&Fixed::operator++()
{
	++fixed_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++fixed_value;
	return (temp);
}

Fixed	&Fixed::operator--()
{
	--fixed_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;
	--fixed_value;
	return (temp);
}


std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	if (fixed.findFractBits() == false)
		os << fixed.toInt();
	else
		os << fixed.toFloat();
	return (os);
}
