/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorException.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 13:46:43 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 14:16:41 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "noSed.hpp"

char const	*ErrorException::what() const noexcept
{

	return message.c_str();
}

void	errorExit(std::string const error)
{

	throw ErrorException(error);
}

ErrorException::ErrorException(std::string const &msg) : message(msg) 
{}
