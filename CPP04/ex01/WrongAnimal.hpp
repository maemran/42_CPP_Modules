/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 15:39:51 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 15:52:21 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal& other );
		WrongAnimal&	operator=( const WrongAnimal& other );
		virtual ~WrongAnimal();

		const std::string&	getType( void ) const;
		void	setType( std::string& type );
		
		void makeSound() const;
};

#endif