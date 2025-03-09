/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:11:48 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 14:23:47 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {
public:
  Character(void);
  Character(std::string const &name);
  Character(Character const &other);

  ~Character(void);

  Character &operator=(Character const &other);

  std::string const & getName(void) const;
  void equip(AMateria* m);
  void unequip(int idx);
  void use(int idx, ICharacter &target);

private:
  std::string _name;
  int _size;
  AMateria *_inventory[4];
};
