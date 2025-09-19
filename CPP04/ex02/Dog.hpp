/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 19:07:10 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 17:14:46 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain*	brain;
	public:
		Dog();
		Dog( const Dog& other );
		Dog&	operator=( const Dog& other );
		Dog( const std::string& type);
		~Dog();
		
		void makeSound() const;
		Brain&	getBrain( void ) const;
};

#endif