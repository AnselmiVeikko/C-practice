// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:29:28 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 13:16:03 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{

private:
	Brain	*brain;

public:
	void		makeSound()  const override;
	void		setIdea(size_t index, std::string const &idea);
	std::string	getIdea(size_t index) const;

	Cat();
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);
	~Cat();
};

#endif
