/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:30:44 by maemran           #+#    #+#             */
/*   Updated: 2025/09/14 16:10:47 by maemran          ###   ########.fr       */
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

Fixed::Fixed( const int fix )
{
	std::cout << "Int constructor called" << std::endl;
	_fix = fix << _fracPart;
}

Fixed::Fixed( const float fix)
{
	std::cout << "Float constructor called" << std::endl;
	_fix = roundf((fix * (1 << _fracPart)));
}

int	Fixed::getRawBits( void ) const
{
	return (_fix);
}

void	Fixed::setRawBits( int const raw )
{
 	this->_fix = raw;
}

int		Fixed::toInt( void ) const
{
	int	num;
	
	num = getRawBits() / (1 << _fracPart);
	return (num);
}

float	Fixed::toFloat( void ) const
{
	float	num;

	num = (float)(getRawBits()) / (1 << _fracPart);
	return (num);
}

std::ostream&	operator<<( std::ostream& os, const Fixed& fix )
{
	os << fix.toFloat();
	return (os);
}
