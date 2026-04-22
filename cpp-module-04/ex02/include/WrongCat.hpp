// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:17:24 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 13:15:01 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"

class	WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat &operator=(WrongCat const &other);
	~WrongCat();

	void	makeSound() const override;

};

#endif
