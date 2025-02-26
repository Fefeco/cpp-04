/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:16:58 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 18:28:18 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(const Cat &other);
	~Cat(void);

	Cat &operator=(const Cat &other);

	void makeSound(void) const;
};
