/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:42:08 by maemran           #+#    #+#             */
/*   Updated: 2025/09/07 15:09:05 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments!" << std::endl;
		return (1);
	}
	std::string	arg = argv[1];
	int level = harl.getLevel(arg);
	switch (level)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			break;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			break;
		case 2:	
			std::cout << "[ WARNING ]" << std::endl;
			break;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			break;
	}
	switch (level)
	{
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:	
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}