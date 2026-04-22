/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:53:35 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 17:22:01 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class	Harl
{

private:
	void	debug();
	void	info();
	void	warning();
	void	error();

public:
	void	complain(std::string level);
};
