/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:07:04 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 18:10:57 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
}

Dog::Dog( const Dog& other )
	:Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
	brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->brain->setIdea(other.brain->getIdea(i), i);
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->brain->setIdea(other.brain->getIdea(i), i);
	}
	return (*this);
}

Dog::Dog( const std::string& type )
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->type = type;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete	brain;
}

void Dog::makeSound() const
{
	std::cout << "\033[38;5;51mwoof\033[0m" << std::endl;
}

Brain&	Dog::getBrain( void ) const
{
	return (*brain);
}