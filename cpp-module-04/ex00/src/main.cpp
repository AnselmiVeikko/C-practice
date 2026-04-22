// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: ahentton <ahentton@student.hive.fi>        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2025/06/27 11:43:16 by ahentton          #+#    #+#             //
//   Updated: 2025/06/27 12:44:48 by ahentton         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	try
	{
		std::cout << "| TESTS PROVIDED IN THE SUBJECT START |\n\n" << std::endl;

		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
	
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
	
		j->makeSound(); //will output the cat sound!
		i->makeSound();
		meta->makeSound();
	
		delete(meta);
		delete(j);
		delete(i);

		std::cout << "\n\n| TESTS PROVIDED IN THE SUBJECT END |\n\n" << std::endl;
	
		std::cout << "| WRONGANIMAL TESTS START |\n\n" << std::endl;

		const WrongAnimal* bad_animal = new WrongAnimal();
		const WrongAnimal* bad_cat = new WrongCat();
		const WrongCat	   actual_wrong_cat;
	
		std::cout << bad_animal->getType() << " " << std::endl;
		std::cout << bad_cat->getType() << " " << std::endl;
		std::cout << actual_wrong_cat.getType() << " " << std::endl;
	
		bad_animal->makeSound();
		bad_cat->makeSound();
		actual_wrong_cat.makeSound();
	
		delete(bad_animal);
		delete(bad_cat);

		std::cout << "\n\n| WRONGANIMAL TESTS END |\n\n" << std::endl;
	
		std::cout << "| CONSTRUCTOR AND ASSIGNMENT TESTS START |\n\n" << std::endl;

		Animal		a;
		Cat		b;
		Dog		c;
		WrongAnimal	d;
	
		Cat		e(b);
		Dog		f;
		WrongAnimal	g(d);
	
		f = c;
	
		std::cout << e.getType() << " " << std::endl;
		std::cout << f.getType() << " " << std::endl;
		std::cout << g.getType() << " " << std::endl;
		e.makeSound();
		f.makeSound();
		g.makeSound();
	}
	catch (const std::bad_alloc &e)
	{
		std::cerr << "Memory allocation error caught" << e.what() << std::endl;
		return (1);
	}

	return (0);
}
