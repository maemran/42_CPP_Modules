/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:25:00 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 11:20:21 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*z1 = newZombie("mohammad");
	if (!z1)
		return (1);
	randomChump("mo");
	z1->announce();
	delete z1;
	return 0;
}