/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:45:37 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:05:39 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

/*
* Constructors
 */
Dog::Dog(void) : AAnimal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other) {
	std::cout << "Dog default copy constructor called" << std::endl;
	brain = new Brain();
	*brain = *(other.brain);
}

/*
* Destructor
 */
Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

/*
* Overload operator
 */
Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain();
		*brain = *(other.brain);
	}
	return *this;
}

/*
* Mandatory member functions
 */
void Dog::makeSound(void) const { std::cout << "Woof" << std::endl; }

/*
* Extra member functions
 */
void Dog::setIdea(std::string idea) {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->setIdea(idea);
}

void Dog::getIdea(void) const {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->getIdea();
}

void Dog::getIdea(int nbIdea) const {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->getIdea(nbIdea);
}
