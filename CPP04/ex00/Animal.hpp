/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:44:22 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 15:24:41 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal();
		Animal( const Animal& other );
		Animal&	operator=( const Animal& other );
		virtual ~Animal();

		const std::string&	getType( void ) const;
		void	setType( std::string& type );
		
		virtual void makeSound() const;
};

#endif
