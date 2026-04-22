// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/04 10:28:14 by ahentton          #+#    #+#             //
//   Updated: 2025/06/04 10:47:40 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{	

private:
	int			fixed_value;
	static const int	fract_bits = 8;

public:
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &other);
	Fixed &operator=(Fixed const &other);
	~Fixed();
	float	toFloat(void) const;
	int	toInt(void) const;
	bool	findFractBits(void) const;
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed);

#endif
