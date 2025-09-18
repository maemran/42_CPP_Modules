/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:41:38 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 19:23:49 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat( const Cat& other )
	:Animal(other)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	this->type = other.type;
	this->brain = other.brain;
}

Cat&	Cat::operator=( const Cat& other )
{
	std::cout << "Cat Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = other.brain;
	}
	return (*this);
}

Cat::Cat( const std::string& type )
{
	std::cout << "Cat Parameterized constructor called" << std::endl;
	this->type = type;
	brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete	brain;
}

void Cat::makeSound() const
{
	std::cout << "\033[38;5;201mpurr\033[0m" << std::endl;
}