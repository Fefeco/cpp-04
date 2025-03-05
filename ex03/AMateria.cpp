/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:56:23 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/05 21:41:52 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <string>

/*
* Constructors
 */
AMateria::AMateria(void) : _type("AMateria") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(std::string const & type) { _type = other._type; }

/*
* Destructor
 */
AMateria::~AMateria(void) {}

/*
* Overload operator
 */
AMateria &operator=(const AMateria &other)
{
  if (this != &other) {
    _type = other._type;
  }
  return *this;
}
