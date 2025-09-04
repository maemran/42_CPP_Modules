/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:26:32 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 11:19:43 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*     newZombie( std::string name )
{
    Zombie *zombie = new (std::nothrow) Zombie(name);
	if (!zombie)
		return (NULL);
	return (zombie);
}
