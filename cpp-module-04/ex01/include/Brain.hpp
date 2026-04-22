// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 12:55:02 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 13:16:00 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <cstddef>
#include <iostream>

class	Brain
{

private:
	std::string	ideas[100];

public:
	Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);
	~Brain();

	void		setIdea(size_t index, std::string const &idea);
	std::string	getIdea(size_t index) const;
};

#endif
