// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:40:47 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 11:41:56 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Dog.hpp"


void	Dog::makeSound() const
{
	std::cout << "BARK BARK" << std::endl;
}

//NOTE: Constructors

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
