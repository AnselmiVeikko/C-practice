/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:11:41 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 17:14:47 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "No complaints? perfect" << std::endl;
		return (0);
	}

	Harl	harl;
	harl.complain(argv[1]);

	return (0);
}
