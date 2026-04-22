// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongAnimal.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:11:22 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:26:08 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound() const
{
	std::cout << "Random Wrong Animal sounds *GRAAWWW*" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

//NOTE: Constructors

WrongAnimal::WrongAnimal() : type("Wrong Random Animal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) : type(other.type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
