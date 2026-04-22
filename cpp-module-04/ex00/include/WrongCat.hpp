// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   WrongCat.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:17:24 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:19:45 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

public:
	WrongCat();
	WrongCat(WrongCat const &other);
	WrongCat &operator=(WrongCat const &other);
	~WrongCat();

	void	makeSound() const;

};

#endif
