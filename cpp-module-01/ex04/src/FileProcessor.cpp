/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileProcessor.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahentton <ahenttone@hive.student.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:54:11 by ahentton          #+#    #+#             */
/*   Updated: 2025/06/03 15:04:54 by ahentton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "noSed.hpp"

void	FileProcessor::openFiles()
{

	infile.open(infileName);
	if (!infile.is_open())
		errorExit("Failed to open input file: " + infileName);
	outfile.open(outfileName);
	if (!outfile.is_open())
		errorExit("failed to create output file: " + outfileName);
}

void	FileProcessor::processFile(std::string const &s1, std::string const &s2)
{
	
	if (!infile.is_open())
		throw ErrorException("Input file is not open.");
	if (!outfile.is_open())
		throw ErrorException("Output file is not open.");
	if (s1.empty())
		throw ErrorException("s1 cannot be empty.");

	std::string line;
	while (std::getline(infile, line)) //looping until nothing more can be read from infile.
	{
		std::string processed_line;
		size_t pos = 0;

		while (1) 
		{
			size_t found = line.find(s1, pos);
			if (found == std::string::npos) // a special constant to check if s1 was not found.
			{
				processed_line += line.substr(pos);
				break;
			}
			processed_line += line.substr(pos, found - pos);
			processed_line += s2;
			pos = found + s1.length();
		}
		outfile << processed_line << '\n';
	}
}

FileProcessor createFileProcessor(std::string const &infileName)
{

	std::string outfileName = infileName + ".replace";
	return (FileProcessor(infileName, outfileName));
}

FileProcessor::FileProcessor(std::string const &infileName, std::string const &outfileName)
	: infileName(infileName), outfileName(outfileName), infile(), outfile() 
{}

FileProcessor::~FileProcessor()
{
	
	if (infile.is_open())
		infile.close();
	if (outfile.is_open())
		outfile.close();
}
