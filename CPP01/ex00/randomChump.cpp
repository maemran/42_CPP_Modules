/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:26:54 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 17:45:01 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void        randomChump( std::string name )
{
	Zombie	*zombie = new (std::nothrow) Zombie(name);
	if (!zombie)
		return ;
	zombie->announce();
}
