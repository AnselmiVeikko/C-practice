// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongAnimal.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:08:06 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:19:51 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class	WrongAnimal
{

protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &other);
	WrongAnimal &operator=(WrongAnimal const &other);
	virtual ~WrongAnimal();

	void	makeSound() const;
	std::string	getType() const;
};

#endif
