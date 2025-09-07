/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:19:09 by maemran           #+#    #+#             */
/*   Updated: 2025/09/07 14:51:19 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class	Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		int		getLevel( std::string level );
		void	complain( std::string level );
		Harl();
		~Harl();
};

#endif