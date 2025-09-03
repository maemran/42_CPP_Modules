/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:26:32 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 20:25:16 by maemran          ###   ########.fr       */
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

void	newZ( std::string name )
{
	Zombie	z(name);
	std::cout << &z << std::endl;
	//return (z);
}
