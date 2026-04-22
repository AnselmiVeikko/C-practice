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

//NOTE: Constructors start here

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

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	if (fixed.findFractBits() == false)
		os << fixed.toInt();
	else
		os << fixed.toFloat();
	return (os);
}
