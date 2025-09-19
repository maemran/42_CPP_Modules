/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:42:16 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 15:47:00 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	type = "";
}

WrongAnimal::WrongAnimal( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	type = other.type;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& other )
{
	std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const 
{
	std::cout << "\033[1;31mWrongAnimal\033[0m" << std::endl;
}

const std::string&	WrongAnimal::getType( void ) const
{
	return (type);
}

void	WrongAnimal::setType( std::string& type )
{
	this->type = type;
}