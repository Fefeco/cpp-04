/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:13:21 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/03 13:38:08 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Brain.hpp"

/*
* Constructors
 */
Brain::Brain(void) : totalIdeas(0) {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain default copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		ideas[i] = std::string(other.ideas[i]);
	}
}

/*
* Destructor
 */
Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
}

/*
* Overload operator
 */
Brain &Brain::operator=(const Brain &other) {
	std::cout << "Brain asignment operator called" << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			if (!other.ideas[i].empty())
			{
				++totalIdeas;
				ideas[i] = other.ideas[i];
			}
		}
	}
	return *this;
}

/*
* Extra member functions
 */
void Brain::getIdea(int nbIdea) const {
	if (nbIdea > totalIdeas) {
		std::cout << "Brain has not this many ideas yet" << std::endl;
		return ;
	}
	std::cout << " ++ Idea: " << ideas[nbIdea] << std::endl;
}

void Brain::getIdea(void) const {
	if (!totalIdeas) {
		std::cout << "Brain has not any ideas yet" << std::endl;
		return ;
	}
	std::cout << ideas[rand() % totalIdeas] << std::endl;
}

void Brain::setIdea(std::string &idea) {
	if (totalIdeas == 100) {
		std::cout << "Brain is full" << std::endl;
		return ;
	}
	ideas[totalIdeas++] = idea;
}
