/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:28:34 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/02 12:24:57 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{

private:
	std::string	name;

public:
	Zombie();
	~Zombie();
	void	setName(std::string const name);
	void	announce();
};

Zombie*	zombieHorde(int n, std::string name);

#endif
