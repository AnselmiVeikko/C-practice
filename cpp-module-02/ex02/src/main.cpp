/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 10:09:06 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/17 10:10:27 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed		b(20.2f);
	Fixed		c(10);
	Fixed const	d(20);
	Fixed const	e(25);

	std::cout << "INCREMENTAL AND DECREMENTAL TESTS BEGIN\n" << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "INCREMENTAL DECREMENTAL TESTS END\n" << std::endl;


	std::cout << "ARITHMETIC TESTS BEGIN\n" << std::endl;

	std::cout << b + c << std::endl;
	std::cout << b - c << std::endl;
	std::cout << b * c << std::endl;
	std::cout << b / c << std::endl;

	std::cout << "ARITHMETIC TESTS END\n" << std::endl;
	
	std::cout << "MIN/MAX TESTS BEGIN\n" << std::endl;


	std::cout << Fixed::min(b, c) << std::endl;
	std::cout << Fixed::max(b, c) << std::endl;
	std::cout << Fixed::min(d, e) << std::endl;
	std::cout << Fixed::max(d, e) << std::endl;

	std::cout << "MIN/MAX TESTS END\n" << std::endl;

	std::cout << "COMPARISON TESTS BEGIN\n" << std::endl;

	std::cout << (d > e) << std::endl;
	std::cout << (d >= e) << std::endl;
	std::cout << (d < e) << std::endl;
	std::cout << (d <= e) << std::endl;
	std::cout << (d == e) << std::endl;
	std::cout << (d != e) <<std::endl;

	std::cout << "COMPARISON TESTS END\n" << std::endl;

	return (0);
}
