/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:43:06 by maemran           #+#    #+#             */
/*   Updated: 2026/02/05 18:07:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter& other ) 
{ 
	(void)other;
}

ScalarConverter& ScalarConverter::operator=( ScalarConverter& other ) 
{ 
	(void)other; 
	return (*this); 
}

ScalarConverter::~ScalarConverter() {}

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
	if (dotFlag != 1 && dotFlag != 0)
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

void convertFromIDF( const std::string& input )
{
	double i;
	i = strtod(input.c_str(), NULL);

	// Char
	if (i >= 0 && i <= 127 && isprint(i) && i != 32)
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	else if ((i >=0 && i <= 32) || i == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	//Int
	if (static_cast<long>(i) > std::numeric_limits<int>::max()
		|| static_cast<long>(i) < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	pseudoLiterals( const std::string& input )
{
	if (input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (input == "+inf" || input == "inf" 
		|| input == "inff" || input == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void ScalarConverter::convert( const std::string& input )
{
	if (isChar(input))
		convertFromChar(input);
	else if (isInt(input) || isDouble(input) || isFloat(input))
		convertFromIDF(input);
	else
		pseudoLiterals(input);
}