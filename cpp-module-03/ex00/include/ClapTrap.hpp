// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/23 14:30:46 by ahentton          #+#    #+#             //
//   Updated: 2025/06/23 14:56:54 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{

private:
	std::string		name;
	unsigned int		hit_points;
	unsigned int		energy_points;
	unsigned int		attack_damage;

public:
	ClapTrap(std::string const name);
	ClapTrap(ClapTrap const &other);
	ClapTrap &operator=(ClapTrap const &other);
	~ClapTrap();

	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);


};

#endif
