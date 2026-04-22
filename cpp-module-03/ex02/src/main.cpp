// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/23 14:53:32 by ahentton          #+#    #+#             //
//   Updated: 2025/06/26 11:03:30 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	athos("Athos");
	FragTrap	porthos("Porthos");

	FragTrap	fighter(athos);
	FragTrap	defender("unknown");

	defender = porthos;

	fighter.attack("Porthos");
	defender.takeDamage(20);
	defender.beRepaired(1);
	defender.highFivesGuys();
	fighter.highFivesGuys();
	return (0);
}
