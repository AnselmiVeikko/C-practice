// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Cat.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:29:28 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 11:33:13 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{

public:
	void	makeSound()  const override;

	Cat();
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);
	~Cat();
};

#endif
