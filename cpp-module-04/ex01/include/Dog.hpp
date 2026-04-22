// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Dog.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:40:06 by ahentton          #+#    #+#             //
//   Updated: 20r5/06/27 13:15:24 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{

private:
	Brain	*brain;

public:
	void		makeSound() const override;
	void		setIdea(size_t index, std::string const &idea);
	std::string	getIdea(size_t index) const;

	Dog();
	Dog(Dog const &other);
	Dog &operator=(Dog const &other);
	~Dog();
};

#endif
