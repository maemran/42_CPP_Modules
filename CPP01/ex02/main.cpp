/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:40:25 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 13:03:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;
	
	std::cout << "\033[31mString variable address: \033[0m" << &str << std::endl;
	std::cout << "\033[31mString refrence address: \033[0m" << &stringREF << std::endl;
	std::cout << "\033[31mString pointer address:  \033[0m" << stringPTR << std::endl << std::endl;

	std::cout << "\033[33mString variable value:   \033[0m" << str << std::endl;
	std::cout << "\033[33mString pointer value:    \033[0m" << *stringPTR << std::endl;
	std::cout << "\033[33mString refrence address: \033[0m" << stringREF << std::endl;
	return (0);
}