/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:45:15 by maemran           #+#    #+#             */
/*   Updated: 2026/02/04 21:31:44 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	ScalarConverter::convert(argv[1]);
	std::cout << (float)(std::numeric_limits<dou>::max() + 1) << std::endl;
	return (0);
}
