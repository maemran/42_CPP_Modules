/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 14:33:31 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 19:13:13 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string		_name;
		Weapon&			_weapon;
	public:
		HumanA(std::string name, Weapon& Weapon);
		~HumanA();
		void	attack( void );
		void	setName( std::string name );
		void	setWeapon(Weapon weapon);
		const	std::string&	getName( void ) const;
		const	Weapon&			getWeapon( void ) const;
};

#endif