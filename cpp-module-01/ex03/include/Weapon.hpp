/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 11:42:51 by ahentton          #+#    #+#             */
/*   Updated: 2025/05/28 12:29:19 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class	Weapon
{

private:
	std::string	type;

public:
	Weapon(std::string type);
	std::string const	&getType() const;
	void			setType(std::string const &type);
};

std::ostream &operator<<(std::ostream &os, Weapon const &weapon);

#endif
