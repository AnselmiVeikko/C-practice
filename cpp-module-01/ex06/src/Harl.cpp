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
	int	complaintLevel = 0;

	if (level == "DEBUG")
		complaintLevel = 1;
	else if (level == "INFO")
		complaintLevel = 2;
	else if (level == "WARNING")
		complaintLevel = 3;
	else if (level == "ERROR")
		complaintLevel = 4;

	switch (complaintLevel)
	{
		case 1: debug();
		case 2: info();
		case 3: warning();
		case 4: error();
		break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
