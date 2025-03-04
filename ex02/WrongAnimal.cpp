/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:20:06 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 21:21:14 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

/*
* Constructors
 */
WrongAnimal::WrongAnimal(void) {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	std::cout << "WrongAnimal default copy constructor called" << std::endl;
	type = other.getType();
}

/*
* Destructor
 */
WrongAnimal::~WrongAnimal(void) { std::cout << "WrongAnimal destructor called" << std::endl; }

/*
* Overload operator
 */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
	if (this != &other) {
		type = other.getType();
	}
	return *this;
}

/*
* Mandatory member functions
 */
std::string WrongAnimal::getType(void) const { return type; }

void WrongAnimal::makeSound(void) const { std::cout << "Sound of wrong Animal" << std::endl; }
