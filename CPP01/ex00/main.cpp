/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:25:00 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 20:23:40 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("mohmmad");
	newZ("ali");
	//std::cout << &z2 << std::endl;
	z1->announce();
	//z2.announce();
	return 0;
}