/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:14:07 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/08 13:05:15 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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
