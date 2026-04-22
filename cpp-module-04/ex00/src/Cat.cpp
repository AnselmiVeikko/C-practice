// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:33:26 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:25:18 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"


void	Cat::makeSound() const
{
	std::cout << "MEEEOOOWWW" << std::endl;
}

//NOTE: Constructors

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
