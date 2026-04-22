/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 12:37:51 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/02 12:38:28 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int n, std::string name)
{

	Zombie	*zList = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		zList[i].setName(name);
		zList[i].announce();
	}
	return (zList);
}
