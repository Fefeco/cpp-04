/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:55:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 12:31:46 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AAnimal {
public:
  AAnimal(void);
  AAnimal(std::string type);
  AAnimal(const AAnimal &other);
  virtual ~AAnimal(void);

  AAnimal &operator=(const AAnimal &other);

  virtual void makeSound(void) const = 0;
  std::string getType() const;

protected:
  std::string type;
};
