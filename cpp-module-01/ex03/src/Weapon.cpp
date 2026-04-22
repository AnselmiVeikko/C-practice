/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:51:06 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 13:01:28 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string const	&Weapon::getType() const
{
	return this->type;
}

void	Weapon::setType(std::string const &type)
{
	this->type = type; 
}

Weapon::Weapon(std::string type) : type(type)
{}

std::ostream &operator<<(std::ostream &os, Weapon const &weapon)
{
	os << weapon.getType();
	return os;
}
