/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:59:21 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 19:38:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class	ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_HitPoints;
		unsigned int	_EnergyPoints;
		unsigned int	_AttackDamage;
	public:
		ClapTrap();
		ClapTrap( const std::string& name );
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& other );
		virtual ~ClapTrap();

		virtual void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired(unsigned int amount);
};

#endif