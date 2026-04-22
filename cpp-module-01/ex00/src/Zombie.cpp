/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:32:02 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/02 12:30:11 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{}

Zombie::~Zombie()
{
	std::cout << this->name << " has been destroyed." << std::endl;
}
