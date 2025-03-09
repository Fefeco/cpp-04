/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:54:59 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 12:36:33 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Cure.hpp"
#include "AMateria.hpp"

/*
* Constructors
 */
Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(std::string const &type) : AMateria(type) {}

Cure::Cure(Cure const &other) : AMateria(other) {}

/*
* Destructor
 */
Cure::~Cure(void) {}

/*
* Overload operator
 */
Cure &Cure::operator=(Cure const &other) {
  if (this != &other) { AMateria::operator=(other); }
  return *this;
}

/*
* Mandatory member functions
 */
AMateria* Cure::clone(void) const { return new Cure(*this); }

void Cure::use(ICharacter& target) {
  std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
