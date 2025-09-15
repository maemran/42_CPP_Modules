/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:30:44 by maemran           #+#    #+#             */
/*   Updated: 2025/09/14 20:42:52 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fracPart = 8;

Fixed::Fixed()
{
	_fix = 0;
}

Fixed::Fixed( const Fixed& fixCopy )
{
	this->_fix = fixCopy.getRawBits();
}

Fixed&	Fixed::operator=( const Fixed& fixCopy )
{
	if (this != &fixCopy)
	{
		this->_fix = fixCopy.getRawBits();
	}
	return (*this);
}

Fixed::~Fixed() {}

Fixed::Fixed( const int fix )
{
	_fix = fix << _fracPart;
}

Fixed::Fixed( const float fix)
{
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

bool	Fixed::operator>(const Fixed& f)
{
	if (this->_fix > f._fix)
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed& f)
{
	if (this->_fix < f._fix)
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed& f)
{
	if (this->_fix >= f._fix)
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed& f)
{
	if (this->_fix <= f._fix)
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed& f)
{
	if (this->_fix == f._fix)
		return (1);
	return (0);
}

bool	Fixed::operator!=(const Fixed& f)
{
	if (this->_fix != f._fix)
		return (1);
	return (0);
}

Fixed		Fixed::operator+(const Fixed& f)
{
	float result;

	result = this->toFloat() + f.toFloat();
	return (Fixed(result));
}

Fixed		Fixed::operator-(const Fixed& f)
{
	float result;

	result = this->toFloat() - f.toFloat();
	return (Fixed(result));
}

Fixed		Fixed::operator*(const Fixed& f)
{
	float result;

	result = this->toFloat() * f.toFloat();
	return (Fixed(result));
}

Fixed		Fixed::operator/(const Fixed& f)
{
	float result;

	result = this->toFloat() / f.toFloat();
	return (Fixed(result));
}

Fixed&	Fixed::operator++()
{
	this->_fix += 1;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->_fix += 1;
	return (temp);
}

Fixed&	Fixed::operator--()
{
	this->_fix -= 1;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->_fix -= 1;
	return (temp);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1._fix > f2._fix)
		return (f2);
	return (f1);
}

const Fixed&	Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1._fix > f2._fix)
		return (f2);
	return (f1);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1._fix > f2._fix)
		return (f1);
	return (f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1._fix > f2._fix)
		return (f1);
	return (f2);
}
