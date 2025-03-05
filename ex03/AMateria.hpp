/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:04:22 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/05 22:32:51 by fcarranz         ###   ########.fr       */
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
  virtual ~AMateria(void);

  AMateria &operator=(AMateria const &other);

  virtual std::string const & getType(void) const = 0; //Returns the materia type
  virtual AMateria* clone(void) const = 0;
  virtual void use(ICharacter& target) = 0;
};
