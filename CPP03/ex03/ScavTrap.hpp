/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:46:35 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 23:56:15 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( const ScavTrap& other );
        ScavTrap( const std::string& name);
        ScavTrap&   operator=( const ScavTrap& other );
        ~ScavTrap();

        void	attack( const std::string& target );
        void guardGate();
};

#endif