/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:45:37 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:13:30 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"

/*
* Constructors
 */
Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog default copy constructor called" << std::endl;
}

/*
* Destructor
 */
Dog::~Dog(void) { std::cout << "Dog destructor called" << std::endl; }

/*
* Overload operator
 */
Dog &Dog::operator=(const Dog &other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

/*
* Mandatory member functions
 */
void Dog::makeSound(void) const { std::cout << "Woof" << std::endl; }
