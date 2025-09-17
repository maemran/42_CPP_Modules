/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:19:58 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 19:23:14 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	type = "";
}

Animal::Animal( const Animal& other )
{
	std::cout << "Animal Copy constructor called" << std::endl;
	type = other.type;
}

Animal&	Animal::operator=( const Animal& other )
{
	std::cout << "Animal Copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() {}

const std::string&	Animal::getType( void ) const
{
	return (type);
}

void	Animal::setType( std::string& type )
{
	this->type = type;
}
