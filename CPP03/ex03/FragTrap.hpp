/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:43:19 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 14:10:14 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class    FragTrap: virtual public ClapTrap
{
	protected:
		static unsigned	int HitPoints;
		static unsigned	int AttackDamage;
    public:
        FragTrap();
        FragTrap( const FragTrap& other );
        FragTrap( const std::string& name);
        FragTrap&   operator=( const FragTrap& other );
        ~FragTrap();

        void        highFivesGuys( void );
};

#endif