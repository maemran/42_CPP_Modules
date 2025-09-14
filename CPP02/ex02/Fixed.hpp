/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:21:51 by maemran           #+#    #+#             */
/*   Updated: 2025/09/14 20:22:32 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	_fix;
		static const int _fracPart;
	public:
		Fixed();
		Fixed( const	Fixed& fixCopy );
		Fixed&	operator=( const Fixed& fixCopy );
		~Fixed();

		Fixed( const int fix );
		Fixed( const float fix );
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		int		toInt( void ) const;
		float	toFloat( void ) const;

		//	6 comparison operators
		bool		operator>(const Fixed& f);
		bool		operator<(const Fixed& f);
		bool		operator>=(const Fixed& f);
		bool		operator<=(const Fixed& f);
		bool		operator==(const Fixed& f);
		bool		operator!=(const Fixed& f);
		
		//	4 arithmetic operators
		Fixed		operator+(const Fixed& f);
		Fixed		operator-(const Fixed& f);
		Fixed		operator*(const Fixed& f);
		Fixed		operator/(const Fixed& f);

		//	4 decrement / increment operators
		Fixed&		operator++();
		Fixed		operator++(int);
		Fixed&		operator--();
		Fixed		operator--(int);

		static Fixed&			min(Fixed& f1, Fixed& f2);
		static const Fixed&		min(const Fixed& f1, const Fixed& f2);
		static Fixed&			max(Fixed& f1, Fixed& f2);
		static const Fixed&		max(const Fixed& f1, const Fixed& f2);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fix);

#endif