/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 10:21:45 by maemran           #+#    #+#             */
/*   Updated: 2025/09/07 14:14:03 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "ERROR:" << std::endl;
	harl.complain("ERROR");
	return (0);
}