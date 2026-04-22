/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:12:56 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 12:28:47 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void	HumanA::attack() const
{
	std::cout << this->name << " attacks with their " << this->weapon << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) 
{}
