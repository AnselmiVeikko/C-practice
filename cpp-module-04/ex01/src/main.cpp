// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:43:16 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:40:54 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "| Summoning 10 cats and 10 dogs |\n\n" << std::endl;
	Animal const	*herd[20];
	size_t		i = 0;

	try
	{
		for (; i < 20; i++)
		{
			if (i < 10)
				herd[i] = new Cat;
			else
				herd[i] = new Dog;
		}
	}
	catch (const std::bad_alloc &e)
	{
		for (size_t j = 0; j < i; j++)
			delete herd[j];
		throw;
	}
	std::cout << "\n\n| Summoned the animals succesfully |\n\n" << std::endl;

	std::cout << "| Checking the animals are present and loud |\n\n" << std::endl;
	for (size_t i = 0; i < 20; i++)
	{
		std::cout << herd[i]->getType() << " says " << std::flush;
		herd[i]->makeSound();
	}
	std::cout << "\n\n| everyone seems to be present and loud! Now Shoo! |\n\n" << std::endl;

	for (size_t j = 0; j < i; j++)
		delete herd[j];

	std::cout << "\n\n| All the animals are gone, I miss Barky and Kitty though.. |\n\n" << std::endl;

	Dog	barky;
	Cat	kitty;

	std::cout <<"\n\n| There you are, do you have any ideas? |\n\n" << std::endl;

	barky.setIdea(0, "MMM I like strawberries, must steal strawberry");
	barky.setIdea(1, "MMHMM Strawberry good, must steal another");
	barky.setIdea(2, "Kitty look unhappy.. why unhappy");

	kitty.setIdea(0, "Oh man barky is so stupid, what is wrong with him");
	kitty.setIdea(1, "Yuck, who even likes strawberries");
	kitty.setIdea(2, "Stupid doggo, he could have stolen tuna instead");

	for (size_t i = 0; i < 3; i++)
	{
		std::cout << "Barky's brain: " << barky.getIdea(i) << std::endl;
		std::cout << "Kitty's brain: " << kitty.getIdea(i) << std::endl;
	}

	std::cout << "\n\n| Kitty looks unhappy, lets clone her |\n\n" << std::endl;

	Cat	cloned_kitty;

	cloned_kitty = kitty;
	std::cout << "\n\nCloned Kitty's brain: " << cloned_kitty.getIdea(0) << std::endl;
	kitty.setIdea(0, "I HATE BEING CLONED!!!!");
	std::cout << "Kitty's brain is altering with a sudden moodswing: " <<kitty.getIdea(0) << std::endl;
	std::cout << "Cloned Kitty's brain after Kitty's moodswing: " << cloned_kitty.getIdea(0) << std::endl;

	std::cout <<"\n\n| Perfect clone, they have their own independent brain! |\n\n" << std::endl;

	std::cout <<"| Maybe barky likes cloning, lets try a different method |\n\n" << std::endl;

	Dog	cloned_barky(barky);
	std::cout << "\n\nCloned Barky's brain: " << cloned_barky.getIdea(0) << std::endl;
	barky.setIdea(0, "No more strawberry, now want watermelon");
	std::cout << "Barky's brain after eating 8 strawberries: " << barky.getIdea(0) << std::endl;
	std::cout << "\n\nCloned Barky's brain after Barky's change of appetite: " \
							<< cloned_barky.getIdea(0) << "\n\n" << std::endl;

	return (0);
}
