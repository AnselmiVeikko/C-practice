// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/23 14:39:47 by ahentton          #+#    #+#             //
//   Updated: 2025/06/23 15:13:02 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"


void	ClapTrap::attack(std::string const &target)
{
	if (this->hit_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " can't attack. " \
			<< this->name << " is dead." << std::endl;
	}
	else if (this->energy_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " can't attack. Not enough energy." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target \
			<< ", causing " << this->attack_damage << " points of damage." << std::endl;
		this->energy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is already dead.. no damage taken" << std::endl;
	}
	else
	{
		if (amount > this->hit_points)
			amount = this->hit_points;
		std::cout << "ClapTrap " << this->name << " takes " << amount << " damage." << std::endl;
		this->hit_points -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " can't be repaired. " \
			<< this->name << " is dead." << std::endl;
	}
	else if (this->energy_points < 1)
	{
		std::cout << "ClapTrap " << this->name << " can't be repaired. Not enough energy." << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->name << \
			" was repaired for " << amount << " hit points." << std::endl;
		this->hit_points += amount;
		this->energy_points--;
	}
}


//NOTE: CONSTRUCTORS

ClapTrap::ClapTrap(std::string const name) 
	: name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other) :	name(other.name),
						hit_points(other.hit_points),
						energy_points(other.energy_points),
						attack_damage(other.attack_damage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;

	if (this != &other)
	{
		this->name = other.name;
		this->hit_points = other.hit_points;
		this->energy_points = other.energy_points;
		this->attack_damage = other.attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}
