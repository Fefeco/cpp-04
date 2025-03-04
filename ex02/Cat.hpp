/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:16:58 by fcarranz          #+#    #+#             */
/*   Updated: 2025/02/27 20:37:00 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(const Cat &other);
	~Cat(void);

	Cat &operator=(const Cat &other);

	void makeSound(void) const;

	void setIdea(std::string idea);
	void getIdea(void) const; 
	void getIdea(int nbIdea) const; 
private:
	Brain* brain;
};
