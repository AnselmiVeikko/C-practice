/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:23:44 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 12:28:25 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack() const
{
	Weapon wep = Weapon("hammer");
	if (this->weapon)
		std::cout << this->name << " attacks with their " << *this->weapon << std::endl;
	else
		std::cout << this->name << " has no weapon to attack with" << std::endl;
}

void	HumanB::setWeapon(Weapon const &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string const &name) : name(name), weapon(nullptr)
{}
