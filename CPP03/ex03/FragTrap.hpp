/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:43:19 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 23:56:04 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class    FragTrap: virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap( const FragTrap& other );
        FragTrap( const std::string& name);
        FragTrap&   operator=( const FragTrap& other );
        ~FragTrap();

        void        highFivesGuys( void );
};

#endif