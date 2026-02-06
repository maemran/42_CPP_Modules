/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:36:44 by maemran           #+#    #+#             */
/*   Updated: 2026/02/06 22:17:41 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}

void        identify( Base* p )
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void        identify( Base& p )
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (std::exception& e)
	{
		(void)e;
		std::cout << "Not A" << std::endl;
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (std::exception& e)
	{
		(void)e;
		std::cout << "Not B" << std::endl;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (std::exception& e)
	{
		(void)e;
		std::cout << "Not C" << std::endl;
	}
}
