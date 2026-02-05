/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:37:51 by maemran           #+#    #+#             */
/*   Updated: 2026/02/05 18:06:48 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <limits>
#include <cmath>

class	ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter& other );
		ScalarConverter& operator=( ScalarConverter& other );
		~ScalarConverter();
		
	public:
		static void	convert( const std::string& input );
};

#endif