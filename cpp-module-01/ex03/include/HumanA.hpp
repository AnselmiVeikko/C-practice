/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 12:06:17 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 12:30:30 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <Weapon.hpp>
#include <iostream>

class	HumanA
{

private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	void	attack() const;
};
#endif
