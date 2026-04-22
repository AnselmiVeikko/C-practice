/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:02:20 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 17:30:11 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{	
	std::cout << "5 cogs are loose inside robot number five" << std::endl;
}

void	Harl::info()
{
	std::cout << "Building a functional new robot requires 29 cogs" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Don't build a new robot, you only have 25 cogs left" << std::endl;
}

void	Harl::error() 
{
	std::cout << "Robot number three has exploded!" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*functions[])() =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Unknown complaint level: " << level << std::endl;
}
