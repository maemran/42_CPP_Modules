/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:59:21 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 14:17:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class	ClapTrap
{
	private:
		std::string		_name;
		int				_HitPoints;
		int				_EnergyPoints;
		int				_AttackDamage;
	public:
		ClapTrap();
		ClapTrap( std::string& name );
		ClapTrap( const ClapTrap& other );
		ClapTrap&	operator=( const ClapTrap& other );
		~ClapTrap();

		void	attack( const std::string& target );
		void	takeDamage( unsigned int amount );
		void	beRepaired(unsigned int amount);
};

#endif