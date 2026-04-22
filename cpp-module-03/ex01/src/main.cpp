// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/23 14:53:32 by ahentton          #+#    #+#             //
//   Updated: 2025/06/23 15:14:58 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	athos("Athos");
	ScavTrap	porthos("Porthos");

	ScavTrap	fighter(athos);
	ScavTrap	defender("unknown");

	defender = porthos;

	fighter.attack("Porthos");
	defender.takeDamage(20);
	defender.takeDamage(20);
	defender.takeDamage(20);
	defender.takeDamage(20);
	defender.takeDamage(20);
	defender.beRepaired(1);
	defender.guardGate();
	return (0);
}
