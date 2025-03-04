/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:55:52 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/04 14:59:12 by fcarranz         ###   ########.fr       */
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

	virtual void makeSound(void) const = 0;
	std::string getType() const;

protected:
	std::string type;
};
