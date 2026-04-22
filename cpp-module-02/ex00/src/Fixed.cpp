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
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_value;
}

void	Fixed::setRawBits(int const raw)
{
	fixed_value = raw;
}

Fixed::Fixed() : fixed_value(0)
{
	std::cout << "Default constructor called" << std::endl;
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
