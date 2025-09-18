/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:30:53 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 16:11:41 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		Cat( const Cat& other );
		Cat&	operator=( const Cat& other );
		Cat( const std::string& type);
		~Cat();
		
		void makeSound() const;
};

#endif