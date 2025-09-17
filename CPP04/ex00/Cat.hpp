/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:30:53 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 19:04:15 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat: public Animal
{
	public:
		Cat();
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		Cat( const std::string& type);
		~Cat();
		
		void makeSound();
};

#endif