/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:55:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:55:36 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal {
public:
	Animal(void);
	Animal(std::string type);
	Animal(const Animal &other);
	virtual ~Animal(void);

	Animal &operator=(const Animal &other);

	virtual void makeSound(void) const;
	std::string getType() const;

protected:
	std::string type;
};
