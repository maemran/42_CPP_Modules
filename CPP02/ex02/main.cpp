/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:50:44 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 11:47:09 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;

	// // my tests
	// Fixed	f1(3.3f);
	// Fixed	f2(4.4f);
	// std::cout << f1 << std::endl;
	// std::cout << --f1 << std::endl;
	// std::cout << f1 << std::endl;
	// std::cout << f1-- << std::endl;
	// std::cout << f1 << std::endl;

	
	// std::cout << f1 + f2 << std::endl;
	// std::cout << f2 - f1 << std::endl;
	// std::cout << f1 * f2 << std::endl;
	// std::cout << f1 / f2 << std::endl;
	// std::cout << f1 + f2 + f1 << std::endl;

	// if (f2 > f1)
	// 	std::cout << f1 << std::endl;
	
	// std::cout << Fixed::min(f1 , f2) << std::endl;
	return (0);
}
