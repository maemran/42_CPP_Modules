/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:14:30 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 19:12:20 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name)
{
	_name = name;
}

HumanB::~HumanB() {};

void	HumanB::setName(std::string name)
{
	this->_name = name;
}

const	std::string&	HumanB::getName( void ) const
{
	return (_name);
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}

const Weapon&	HumanB::getWeapon( void ) const
{
	return (*_weapon);
}

void	HumanB::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
