/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcarranz <fcarranz@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:04:50 by fcarranz          #+#    #+#             */
/*   Updated: 2025/03/03 12:33:41 by fcarranz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain {
public:
	Brain(void);
	Brain(const Brain &other);

	~Brain(void);

	Brain &operator=(const Brain &other);

	std::string ideas[100];

	void setIdea(std::string &idea);
	void getIdea(int nbIdea) const;
	void getIdea(void) const;
private:
	int totalIdeas;
};
