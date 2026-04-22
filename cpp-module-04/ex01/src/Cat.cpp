// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:33:26 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 13:34:34 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Cat.hpp"


void	Cat::makeSound() const
{
	std::cout << "MEEEOOOWWW" << std::endl;
}

void	Cat::setIdea(size_t index, std::string const &idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Cat::getIdea(size_t index) const
{
	return (this->brain->getIdea(index));
}

//NOTE: Constructors

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}
