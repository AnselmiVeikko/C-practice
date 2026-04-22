// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:59:38 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 13:19:34 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

void	Brain::setIdea(size_t index, std::string const &idea)
{
	this->ideas[index] = idea;
}

std::string Brain::getIdea(size_t index) const
{
	return (this->ideas[index]);
}

//NOTE: Constructors

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
