// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:19:57 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:26:56 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongCat.hpp"

void	WrongCat::makeSound() const
{
	std::cout << "Something is very wrong with this cat *MMRRRRAAOOW*" << std::endl;
}

//NOTE: Constructors

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
