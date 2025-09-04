/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:06:34 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 18:24:15 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	:_weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA() {};

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}

const	std::string&	HumanA::getName( void ) const
{
	return (_name);
}

const Weapon&	HumanA::getWeapon( void ) const
{
	return (_weapon);
}

void	HumanA::attack( void )
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
