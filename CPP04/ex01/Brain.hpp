/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:01:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/19 18:20:04 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain( const Brain& other );
		Brain&	operator=( const Brain& other );
		~Brain();

		void	printIdea( int index );
		void	setIdea( const std::string& idea, int index );
		std::string&	getIdea( int index );
};

#endif