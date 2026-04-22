/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:10:45 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 12:53:55 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class	HumanB
{

private:
	std::string	name;
	Weapon const		*weapon;

public:
	HumanB(std::string const &name);
	void	setWeapon(Weapon const &weapon);
	void	attack() const;
};
#endif
