/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:23:39 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:26:40 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongCat.hpp"

/*
* Constructors
 */
WrongCat::WrongCat(void) : Animal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : Animal(other) {
	std::cout << "WrongCat default copy constructor called" << std::endl;
}

/*
* Destructor
 */
WrongCat::~WrongCat(void) { std::cout << "WrongCat destructor called" << std::endl; }

/*
* Overload operator
 */
WrongCat &WrongCat::operator=(const WrongCat &other) {
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

/*
* Mandatory member functions
 */
void WrongCat::makeSound(void) const { std::cout << "Zzzssssspssstaaaaa!" << std::endl; }
