/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:30:44 by maemran           #+#    #+#             */
/*   Updated: 2025/09/13 17:18:37 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fracPart = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fix = 0;
}

Fixed::Fixed( const Fixed& fixCopy )
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fix = fixCopy.getRawBits();
}

Fixed&	Fixed::operator=( const Fixed& fixCopy )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixCopy)
	{
		this->_fix = fixCopy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fix);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
 	this->_fix = raw;
}
