/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 21:27:58 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 00:46:32 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class  DiamondTrap: public FragTrap, public ScavTrap
{
    private:
        std::string     _name;
    public:
        DiamondTrap();
        DiamondTrap( const DiamondTrap& other );
        DiamondTrap( const std::string& name);
        DiamondTrap&   operator=( const DiamondTrap& other );
        ~DiamondTrap();

        void whoAmI();
        using ScavTrap::attack;
};

#endif
