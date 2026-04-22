/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 11:54:31 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 14:25:33 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "noSed.hpp"

int	main(int argc, char *argv[])
{
	try
	{
		if (argc < 4)
			errorExit("Invalid amount of arguments.");

		FileProcessor fp = createFileProcessor(argv[1]);
		fp.openFiles();
		fp.processFile(argv[2], argv[3]);

	}
	catch (const ErrorException &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
