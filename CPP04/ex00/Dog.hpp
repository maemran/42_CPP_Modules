/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:07:10 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 19:27:57 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog: public Animal
{
	public:
		Dog();
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		Dog( const std::string& type);
		~Dog();
		
		void makeSound();
};

#endif