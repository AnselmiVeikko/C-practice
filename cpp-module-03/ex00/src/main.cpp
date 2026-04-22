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

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	athos("Athos");
	ClapTrap	porthos("Porthos");

	ClapTrap	fighter(athos);
	ClapTrap	defender("unknown");

	defender = porthos;

	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	fighter.attack("Porthos");
	defender.takeDamage(30);
	defender.attack("Athos");
	defender.beRepaired(1);
	return (0);
}
