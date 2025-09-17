/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:58:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 14:18:56 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main( void )
{
    {
        std::cout << "DiamondTrap TEST: " << std::endl;
        DiamondTrap    robot("maemran");
        DiamondTrap    robot2 = robot;

        robot2.attack("mohammad");

        robot2.takeDamage(30);

        robot2.beRepaired(15);

        robot2.highFivesGuys();

        robot2.guardGate();

        robot2.whoAmI();

        robot2.takeDamage(60);
        robot2.beRepaired(10);

        robot2.takeDamage(35);
    }
    return (0);
}
