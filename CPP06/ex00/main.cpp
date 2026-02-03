/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:15 by maemran           #+#    #+#             */
/*   Updated: 2026/02/03 21:14:53 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <sstream>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	
	std::stringstream ss;
	std::string input = argv[1];
	if (ScalarConverter::isFloat(input))
		std::cout << "sssssss" << std::endl;
	//std::cout << (int)(input.size()) << std::endl;

	return (0);
}


//double 
//int 
//float
//char