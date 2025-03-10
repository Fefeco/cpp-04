/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 15:06:34 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/10 10:53:58 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
public:
  virtual ~IMateriaSource() {}
  virtual void learnMateria(AMateria*) = 0;
  virtual AMateria* createMateria(std::string const & type) = 0;
};
