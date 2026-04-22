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

class	Fixed
{	

private:
	int			fixed_value;
	static const int	fract_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
