/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:58:47 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:13:53 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cat.hpp"

/*
* Constructors
 */
Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << "Cat default copy constructor called" << std::endl;
}

/*
* Destructor
 */
Cat::~Cat(void) { std::cout << "Cat destructor called" << std::endl; }

/*
* Overload operator
 */
Cat &Cat::operator=(const Cat &other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

/*
* Mandatory member functions
 */
void Cat::makeSound(void) const { std::cout << "Miau" << std::endl; }
