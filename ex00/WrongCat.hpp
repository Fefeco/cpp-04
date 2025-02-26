/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:22:48 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 20:23:25 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class WrongCat : public Animal {
public:
	WrongCat(void);
	WrongCat(const WrongCat &other);
	~WrongCat(void);

	WrongCat &operator=(const WrongCat &other);

	void makeSound(void) const;
};
