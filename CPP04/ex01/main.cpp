/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:13:58 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 18:20:25 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	int N = 4;
	const Animal* animals[N];
	
	for(int i = 0; i < N; i++)
	{
		if (i < (N / 2))
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
		std::cout << std::endl;
	}
	
	/****************************************/
	Cat	a;

	a.getBrain().setIdea("\033[31mpurrrr\033[0m", 0);
	std::cout << std::endl;
	a.getBrain().printIdea(0);
	std::cout << std::endl;
	/*************************************** */

	
	for (int i = 0; i < N; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	
	/***************************************/

	Dog	b;
	Dog c = b;
	(void)c;

	/***************************************/
	return 0;
}
