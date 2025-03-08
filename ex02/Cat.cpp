/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:58:47 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:05:55 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"
#include "Brain.hpp"

/*
* Constructors
 */
Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other) {
	std::cout << "Cat default copy constructor called" << std::endl;
	brain = new Brain();
	*brain = *(other.brain);
}

/*
* Destructor
 */
Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

/*
* Overload operator
 */
Cat &Cat::operator=(const Cat &other) {
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
void Cat::makeSound(void) const { std::cout << "Miau" << std::endl; }

/*
* Extra member functions
 */
void Cat::setIdea(std::string idea) {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->setIdea(idea);
}

void Cat::getIdea(void) const {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->getIdea();
}

void Cat::getIdea(int nbIdea) const {
	if (!brain) {
		std::cout << "Error " << type << " has no brain" << std::endl;
		return ;
	}
	brain->getIdea(nbIdea);
}
