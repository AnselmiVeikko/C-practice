/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:47:55 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/02 12:29:12 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*z1 = newZombie("Athos");
	z1->announce();
	delete z1;
	
	randomChump("Porthos");

	return (0);
}
