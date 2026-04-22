// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/05/21 15:29:00 by ahentton          #+#    #+#             //
//   Updated: 2025/05/21 17:22:44 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;


	std::cout << "Address of string: " << &string << std::endl;
	std::cout << "Address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Address of stringREF: " << &stringREF << std::endl;

	std::cout << "Value of str: " << string << std::endl;
	std::cout << "Value of ptr: " << *stringPTR << std::endl;
	std::cout << "Value of ref: " << stringREF << std::endl;
}
