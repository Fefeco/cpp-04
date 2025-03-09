/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:09:27 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 12:36:23 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Ice.hpp"
#include "AMateria.hpp"

/*
* Constructors
 */
Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(std::string const &type) : AMateria(type) {}

Ice::Ice(Ice const &other) : AMateria(other) {}

/*
* Destructor
 */
Ice::~Ice(void) {}

/*
* Overload operator
 */
Ice &Ice::operator=(Ice const &other) {
  if (this != &other) { AMateria::operator=(other); }
  return *this;
}

/*
* Mandatory member functions
 */
AMateria* Ice::clone(void) const { return new Ice(*this); }

void Ice::use(ICharacter& target) {
  std::cout << "* shoots an ice bolt at "
            << target.getName() << " *" << std::endl;
}
