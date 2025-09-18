/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 16:01:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/18 18:16:06 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class	Brain
{
	protected:
		std::string	ideas[100];
	public:
		Brain();
		Brain( const Brain& other );
		Brain&	operator=( const Brain& other );
		~Brain();
};

#endif