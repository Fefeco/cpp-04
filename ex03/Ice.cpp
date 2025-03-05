/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:09:27 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/05 22:46:08 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <iostream>

/*
* Constructors
 */
Ice::Ice(void) : _type("ice") {}

Ice::Ice(std::string const &type) : _type(type) {}

Ice::Ice(Ice const &other) { _type = other._type; }

/*
* Destructor
 */
Ice::~Ice(void) {}

/*
* Overload operator
 */
Ice &Ice::operator=(Ice const &other)
{
  if (this != &other) {
    _type = other._type;
  }
  return *this;
}

/*
* Mandatory member functions
 */
std::string const &Ice::getType(void) const { return &_type; }

AMateria* Ice::clone(void) const { return new Ice(*this); }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
