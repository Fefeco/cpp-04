/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:18:46 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/26 21:29:06 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class WrongAnimal {
public:
	WrongAnimal(void);
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	virtual ~WrongAnimal(void);

	WrongAnimal &operator=(const WrongAnimal &other);

	void makeSound(void) const;
	std::string getType() const;

protected:
	std::string type;
};
