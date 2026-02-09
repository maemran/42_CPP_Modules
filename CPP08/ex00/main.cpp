/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:10:40 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 15:22:23 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	{
		try
		{
			std::vector<int> v;
			v.push_back(10);
			v.push_back(20);
			v.push_back(30);
			v.push_back(40);
		
			std::vector<int>::iterator itr = easyfind(v, 10);
			std::cout << *itr << std::endl;
		}
		catch(std::runtime_error& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << "------------------------------------------" << std::endl;
		try
		{
			std::deque<int> d;
			d.push_back(10);
			d.push_back(20);
			d.push_back(30);
			d.push_back(40);
		
			while (!d.empty())
			{
				std::cout << d.front() << std::endl;
				d.pop_front();
			}
			std::cout << "------------------------------------------" << std::endl;
			d.push_front(10);
			d.push_front(20);
			d.push_front(30);
			d.push_front(40);
			std::deque<int>::iterator itr = easyfind(d, 10);
			std::cout << *itr << std::endl;
		}
		catch(std::runtime_error& e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}
