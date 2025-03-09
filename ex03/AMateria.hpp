/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:04:22 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:11:40 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AMateria {
protected:
  std::string _type;

public:
  AMateria(void);
  AMateria(std::string const & type);
  AMateria(AMateria const &other);

  virtual ~AMateria(void);

  AMateria &operator=(AMateria const &other);

  std::string const & getType(void) const; //Returns the materia type

  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target);
};
