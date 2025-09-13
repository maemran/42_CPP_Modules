/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:21:51 by maemran           #+#    #+#             */
/*   Updated: 2025/09/13 17:12:22 by maemran          ###   ########.fr       */
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
		
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif