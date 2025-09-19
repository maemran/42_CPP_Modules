/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 18:12:41 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 18:19:53 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[36mBrain Default constructor called\033[0m" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
}

Brain::Brain( const Brain& other )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=( const Brain& other )
{
	std::cout << "Brain Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[35mBrain Destructor called\033[0m" << std::endl;
}

void	Brain::printIdea( int index )
{
	std::cout << "First idea is: " << ideas[index] << std::endl;
}

void	Brain::setIdea( const std::string& idea, int index )
{
	this->ideas[index] = idea;
}

std::string&	Brain::getIdea( int index )
{
	return (ideas[index]);
}