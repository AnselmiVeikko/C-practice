/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 16:07:11 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/23 19:21:08 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	ScavTrap::attack(std::string const &target)
{
	if (this->hit_points < 1)
	{
		std::cout << "ScavTrap " << this->name << " can't attack. " \
			<< this->name << " is dead." << std::endl;
	}
	else if (this->energy_points < 1)
	{
		std::cout << "ScavTrap " << this->name << " can't attack. Not enough energy." << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target \
			<< ", causing " << this->attack_damage << " points of damage." << std::endl;
		this->energy_points--;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is now in gatekeeper mode" << std::endl;
}


//NOTE: CONSTRUCTORS AND OPERATORS

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;

	std::cout << "ScavTrap default constructor called for " << this->name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}


ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hit_points = other.hit_points;
	this->energy_points = other.energy_points;
	this->attack_damage = other.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
