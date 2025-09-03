/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:49:29 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 19:54:27 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

class test
{
	private:
		std::string _name;
	public:
		int x;
		std::string    getName( void ) const;
		void    setName( std::string name );
		void    printValue( void );
};

void test::setName (std::string name)
{
	this->_name = name;
}

std::string    test::getName( void ) const
{
	return (_name);   
}

void    test::printValue( void )
{
	std::cout << x << std::endl;
}

int main(void)
{
	
	return 0;
}
