/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 19:43:06 by maemran           #+#    #+#             */
/*   Updated: 2026/02/03 21:29:38 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


		//ScalarConverter();
		//ScalarConverter( const ScalarConverter& other );
		//ScalarConverter& operator=( ScalarConverter& other );
		//~ScalarConverter();

int	isChar( const std::string& input )
{
	if ((int)(input.size()) != 1)
		return (0);
	if (input[0] >= 33 && input[0] <= 126)
		return (1);
	return (0);
}

int isInt( const std::string& input )
{
	for (int i = 0; i < (int)(input.size()); i++)
	{
		if (!isdigit(input[i]))
			return 0;
	}
	return 1;
}

int	isFloat( const std::string& input )
{
	int dotFlag = 0;
	
	if (input[(int)(input.size()) - 1] != 'f' 
		|| (input[(int)(input.size()) - 2] == '.'
		&& input[(int)(input.size()) - 1] == 'f'))
		return (0);
	for (int i = 0; i < (int)(input.size()) - 1; i++)
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

	if (input[(int)(input.size()) - 1] == '.')
		return (0);
	for (int i = 0; i < (int)(input.size()); i++)
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
	// strore inside char variable
	// then convert to all other types
	// print it
	// repeat this steps on all other types
}

void	convertFromInt( const std::string& input )
{

}

void	convertFromDouble( const std::string& input )
{

}

void	convertFromFloat( const std::string& input )
{
	
}

void	pseudoLiterals( const std::string& input )
{
	
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