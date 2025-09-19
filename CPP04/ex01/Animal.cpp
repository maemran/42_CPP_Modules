/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:19:58 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 18:16:11 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\033[38;5;46mAnimal Default constructor called\033[0m" << std::endl;
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
	std::cout << "\033[1;31mAnimal Destructor call\033[0m" << std::endl;
}

void Animal::makeSound() const {}

const std::string&	Animal::getType( void ) const
{
	return (type);
}

void	Animal::setType( std::string& type )
{
	this->type = type;
}
