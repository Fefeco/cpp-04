/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:48:45 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/27 21:26:41 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

void testBrain(void) {
	Dog* dog1 = new Dog();
	Cat* cat1 = new Cat();

	dog1->setIdea("idea 1");
	dog1->setIdea("idea 2");
	dog1->setIdea("idea 3");

	cat1->setIdea("walk");
	cat1->setIdea("climb");
	cat1->setIdea("eat");

	cat1->getIdea();

	dog1->getIdea(2);
	dog1->getIdea();

	Dog* dog2 = new Dog();

	*dog2 = *dog1;
	delete dog1;
	dog2->getIdea(3);
	dog2->getIdea(5);

	Cat* cat2 = new Cat(*cat1);
	delete cat1;

	cat2->getIdea(2);
	cat2->getIdea(9);
	
	delete dog2;
	delete cat2;
}

int main()
{
//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//
//	delete meta;
//	delete j;
//	delete i;

	testBrain();
	return 0;
}
