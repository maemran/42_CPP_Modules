/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:58:34 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 11:13:33 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* zombies = new (std::nothrow) Zombie[N];
    if (!zombies)
        return (NULL);
    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return (zombies);
}
