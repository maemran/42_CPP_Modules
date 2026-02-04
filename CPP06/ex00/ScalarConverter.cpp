/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:43:06 by maemran           #+#    #+#             */
/*   Updated: 2026/02/04 21:44:04 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	isChar( const std::string& input )
{
	if ((int)(input.size()) != 1 || isdigit((input[0])))
		return (0);
	if (input[0] >= '!' && input[0] <= '~')
		return (1);
	return (0);
}

int isInt( const std::string& input )
{
	int i = 0;
	
	if (input[0] == '-')
		i = 1;
	for (; i < (int)(input.size()); i++)
	{
		if (!isdigit(input[i]))
			return 0;
	}
	return 1;
}

int	isFloat( const std::string& input )
{
	int dotFlag = 0;
	int i = 0;
	
	if (input[0] == '-')
		i = 1;
	if (input[(int)(input.size()) - 1] != 'f')
		return (0);
	for (; i < (int)(input.size()) - 1; i++)
	{
		if (!isdigit(input[i]) && input[i] != '.')
			return 0;
		if (input[i] == '.')
			dotFlag++;
	}
	if (dotFlag != 1)
		return 0;
	return 1;
}

int	isDouble( const std::string& input )
{
	int dotFlag = 0;
	int i = 0;
	
	if (input[0] == '-')
		i = 1;
	for (;i < (int)(input.size()); i++)
	{
		if (!isdigit(input[i]) && input[i] != '.')
			return 0;
		if (input[i] == '.')
			dotFlag++;
	}
	if (dotFlag != 1)
		return 0;
	return 1;
}

void	convertFromChar( const std::string& input )
{
	std::stringstream	ss;
	char c;

	ss << input;
	ss >> c;
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	convertFromInt( const std::string& input )
{
	std::stringstream	ss;
	long i;

	ss << input;
	ss >> i;
	if (i >= 0 && i <= 127 && isprint(i) && i != 32)
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (i > std::numeric_limits<int>::max())
		std::cout << "int: overflow" << std::endl;
	else if (i < std::numeric_limits<int>::min())
		std::cout << "int: underflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void	convertFromDouble( const std::string& input )
{
	(void)input;
}

void	convertFromFloat( const std::string& input )
{
	std::stringstream	ss;
	long i;

	ss << input;
	ss >> i;
	// defferance between not disp and impossible
	if (i >= 0 && i <= 127 && isprint(i) && i != 32)
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	if (i > std::numeric_limits<float>::max() || i < std::numeric_limits<float>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	// handle if the float is overflow or underflow its an inf and -inf
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;	
}

void	pseudoLiterals( const std::string& input )
{
	(void)input;	
}

void ScalarConverter::convert( const std::string& input )
{
	if (isChar(input))
		convertFromChar(input);
	else if (isInt(input))
		convertFromInt(input);
	else if (isDouble(input))
		convertFromDouble(input);
	else if (isFloat(input))
		convertFromFloat(input);
	else
		pseudoLiterals(input);
}