/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:14:07 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/27 20:34:55 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
	Dog(void);
	Dog(const Dog &other);
	~Dog(void);

	Dog &operator=(const Dog &other);

	void makeSound(void) const;

	void setIdea(std::string idea);
	void getIdea(void) const; 
	void getIdea(int nbIdea) const; 
private:
	Brain* brain;
};
