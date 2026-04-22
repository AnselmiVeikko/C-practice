// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Animal.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/26 14:24:44 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 11:31:01 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"

void	Animal::makeSound() const
{
	std::cout << "Random Animal sounds *BRRRRRR*" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

//NOTE: Constructors

Animal::Animal() : type("Random Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &other) : type(other.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
