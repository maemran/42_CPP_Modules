/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:44:47 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 15:51:23 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat& other )
	:WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	this->type = other.type;
}

WrongCat&	WrongCat::operator=( const WrongCat& other )
{
	std::cout << "WrongCat Copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

WrongCat::WrongCat( const std::string& type )
{
	std::cout << "WrongCat Parameterized constructor called" << std::endl;
	this->type = type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\033[38;5;201mpurr\033[0m" << std::endl;
}