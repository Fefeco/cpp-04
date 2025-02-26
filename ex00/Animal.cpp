/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:31:23 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:20:26 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

/*
* Constructors
 */
Animal::Animal(void) {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other) {
	std::cout << "Animal default copy constructor called" << std::endl;
	type = other.getType();
}

/*
* Destructor
 */
Animal::~Animal(void) { std::cout << "Animal destructor called" << std::endl; }

/*
* Overload operator
 */
Animal &Animal::operator=(const Animal &other) {
	if (this != &other) {
		type = other.getType();
	}
	return *this;
}

/*
* Mandatory member functions
 */
std::string Animal::getType(void) const { return type; }

void Animal::makeSound(void) const { std::cout << "..." << std::endl; }
