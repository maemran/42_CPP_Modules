/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:14:38 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 19:13:10 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string		_name;
		Weapon*			_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack( void );
		void	setName( std::string name );
		void	setWeapon(Weapon& weapon);
		const Weapon&	getWeapon( void ) const;
		const	std::string&	getName( void ) const;
};

#endif