/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:26:15 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 20:19:18 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie() {
	std::cout << "hello" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
