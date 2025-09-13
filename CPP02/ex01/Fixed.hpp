/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:21:51 by maemran           #+#    #+#             */
/*   Updated: 2025/09/13 18:47:25 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

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
};

std::ostream&	operator<<(std::ostream& os, const Fixed& fix);

#endif