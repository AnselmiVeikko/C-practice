/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   noSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:05:51 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 13:52:44 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NOSED_HPP
# define NOSED_HPP

#include <iostream>
#include <string>
#include <fstream>

class	FileProcessor
{

private:
	std::string	infileName;
	std::string	outfileName;
	std::ifstream	infile;
	std::ofstream	outfile;
public:
	void	openFiles();
	void	processFile(std::string const &s1, std::string const &s2);
	FileProcessor(std::string const &infileName, std::string const &outfileName);
	~FileProcessor();

};

class	ErrorException : public std::exception
{

private:
	std::string	message;
public:
	explicit 	ErrorException(std::string const &msg);
	char const	*what() const noexcept override;
};

FileProcessor	createFileProcessor(std::string const &infileName);
void		errorExit(std::string const error);

#endif
