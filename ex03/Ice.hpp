/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:57:57 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/05 22:39:20 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
public:
  Ice(void);
  Ice(std::string const &type);
  Ice(Ice const &other);

  ~Ice(void);

  Ice &operator=(Ice const &other);

  std::string const & getType(void) const;
  AMateria* clone(void) const;
  void use(ICharacter& target);
};
