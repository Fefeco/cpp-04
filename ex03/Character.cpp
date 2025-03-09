/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:47:42 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 14:54:23 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

/*
* Constructors
 */
Character::Character(void) : _name("default"), _size(0) {
  for (int i = 0; i < 4; i++) { _inventory[i] = NULL; }
}

Character::Character(std::string const &name) : _name(name), _size(0) {
  for (int i = 0; i < 4; i++) { _inventory[i] = NULL; }
}

Character::Character(Character const &other)
  : _name(other._name), _size(other._size)
{
  for (int i = 0; i < 4; i++) {
    if (other._inventory[i]) {
      _inventory[i] = other._inventory[i]->clone();
    } else {
      _inventory[i] = NULL; 
    }
  }
}

/*
* Destructor
 */
Character::~Character(void) {
  for (int i = 0; i < 4; i++) { if (_inventory[i]) { delete _inventory[i]; } }
}

/*
* Overload operator
 */
Character &Character::operator=(Character const &other) {
  if (this != &other) {
    _size = other._size;
    _name = other._name;

    for (int i = 0; i < 4; i++) {
      if (_inventory[i]) { delete _inventory[i]; _inventory[i] = NULL; }
      if (other._inventory[i]) { _inventory[i] = other._inventory[i]->clone(); }
    }
  }
  return *this;
}

/*
* Mandatory member functions
 */
std::string const &Character::getName(void) const { return _name; }

void Character::equip(AMateria* m) {
  if (_size == 4) { return; }
  for (int i = 0; i < 4; i++) {
    if (_inventory[i]) { continue; }
  _inventory[i] = m;
  ++_size;
  break;
  }
}

void Character::unequip(int idx) {
 if (idx >= 4 || !_inventory[idx]) { return; } 
 _inventory[idx] = NULL;
 --_size;
}

void Character::use(int idx, ICharacter &target) {
 if (idx >= 4 || !_inventory[idx]) { return; } 
 _inventory[idx]->use(target);
}
