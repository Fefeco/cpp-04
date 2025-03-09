/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:53:55 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:43:21 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria {
public:
  Cure(void);
  Cure(std::string const &type);
  Cure(Cure const &other);

  ~Cure(void);

  Cure &operator=(Cure const &other);

  AMateria* clone(void) const;
  void use(ICharacter& target);
};
