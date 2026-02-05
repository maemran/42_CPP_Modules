/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:15 by maemran           #+#    #+#             */
/*   Updated: 2026/02/05 18:03:15 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <exception>

int	main(int argc, char **argv)
{
	try 
	{
		if (argc != 2)
			throw std::logic_error("Error: Invalid number of arguments");
		ScalarConverter::convert(argv[1]);
	}
	catch (std::logic_error& e) 
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
