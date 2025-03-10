/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:56:23 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/10 12:27:17 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AMateria.hpp"

/*
* Constructors
 */
AMateria::AMateria(void) : _type("AMateria") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &other) : _type(other._type) {}

/*
* Destructor
 */
AMateria::~AMateria(void) {}

/*
* Overload operator
 */
AMateria &AMateria::operator=(AMateria const &other) { (void)other; return *this; }

/*
* Mandatory member functions
 */
std::string const &AMateria::getType(void) const { return _type; }

void AMateria::use(ICharacter& target) { (void)target; }
