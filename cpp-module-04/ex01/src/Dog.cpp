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

void	Dog::setIdea(size_t index, std::string const &idea)
{
	this->brain->setIdea(index, idea);
}

std::string	Dog::getIdea(size_t index) const
{
	return (this->brain->getIdea(index));
}

//NOTE: Constructors

Dog::Dog() : Animal()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &other) : Animal(other)
{
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->brain;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}
