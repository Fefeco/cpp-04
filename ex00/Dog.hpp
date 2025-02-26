/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:14:07 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 18:28:34 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog &operator=(const Dog &other);

	void makeSound(void) const;
};
