/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:53:32 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 11:18:20 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    Zombie *z = zombieHorde(3, "abdsalah");
    if (!z)
        return (1);
    for (int i = 0; i < 3; i++)
        z[i].announce();
    delete[] z;
    return (0);
}