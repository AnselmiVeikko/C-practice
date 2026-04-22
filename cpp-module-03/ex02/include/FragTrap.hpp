// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/25 15:25:03 by ahentton          #+#    #+#             //
//   Updated: 2025/06/25 17:55:54 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{

public:

	void	highFivesGuys(void);

	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	FragTrap &operator=(FragTrap const &other);
	~FragTrap();
};

#endif
