// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/26 13:45:07 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 11:30:39 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class	Animal
{

protected:
	std::string	type;

public:
	Animal();
	Animal(Animal const &other);
	Animal &operator=(Animal const &other);
	virtual ~Animal();

	virtual void	makeSound() const = 0;
	std::string	getType() const;
};

#endif
