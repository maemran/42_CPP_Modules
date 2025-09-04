/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:19:11 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 15:28:56 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon( std::string type )
{
	_type = type;
}

Weapon::~Weapon() {};

void	Weapon::setType( std::string type )
{
	this->_type = type;
}

const std::string&	Weapon::getType( void ) const
{
	return (_type);
}