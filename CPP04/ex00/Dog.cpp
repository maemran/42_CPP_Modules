/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:07:04 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 19:10:39 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	type = "Dog";
}

Dog::Dog( const Dog& other )
	:Animal(other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->type = other.type;
}

Dog&	Dog::operator=( const Dog& other )
{
	std::cout << "Dog Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

Dog::Dog( const std::string& type )
{
	std::cout << "Dog Parameterized constructor called" << std::endl;
	this->type = type;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound()
{
	std::cout << "woof" << std::endl;
}
