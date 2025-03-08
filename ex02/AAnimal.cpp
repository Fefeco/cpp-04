/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:31:23 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:01:07 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AAnimal.hpp"

/*
* Constructors
 */
AAnimal::AAnimal(void) {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string _type) : type(_type) {
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) {
	std::cout << "AAnimal default copy constructor called" << std::endl;
	type = other.getType();
}

/*
* Destructor
 */
AAnimal::~AAnimal(void) { std::cout << "AAnimal destructor called" << std::endl; }

/*
* Overload operator
 */
AAnimal &AAnimal::operator=(const AAnimal &other) {
	if (this != &other) {
		type = other.getType();
	}
	return *this;
}

/*
* Mandatory member functions
 */
std::string AAnimal::getType(void) const { return type; }
