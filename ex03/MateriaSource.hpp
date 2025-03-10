/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:07:54 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/10 11:18:16 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
public:
  MateriaSource(void);
  MateriaSource(MateriaSource const &other);

  ~MateriaSource(void);

  MateriaSource &operator=(MateriaSource const &other);

  void learnMateria(AMateria*);
  AMateria* createMateria(std::string const & type);

private:
  int _size;
  AMateria *_array[4];
};
