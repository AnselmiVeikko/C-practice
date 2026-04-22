// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/26 10:47:49 by ahentton          #+#    #+#             //
//   Updated: 2025/06/26 10:59:43 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " requests a mighty high five" << std::endl;
}

//NOTE: Constructors

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}
