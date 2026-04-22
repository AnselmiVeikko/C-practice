// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:40:06 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 11:42:59 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{

public:
	void	makeSound() const override;

	Dog();
	Dog(Dog const &other);
	Dog &operator=(Dog const &other);
	~Dog();
};

#endif
