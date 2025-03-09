/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:16:58 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/09 11:10:25 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
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
