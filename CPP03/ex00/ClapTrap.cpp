/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:11:03 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 14:13:00 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//ClapTrap();
//		ClapTrap( std::string& name );
//		ClapTrap( const ClapTrap& other );
//		ClapTrap&	operator=( const ClapTrap& other );
//		~ClapTrap();

ClapTrap::ClapTrap()
{
	_name = nullptr;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}