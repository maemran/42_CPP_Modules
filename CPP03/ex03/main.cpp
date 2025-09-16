/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:58:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 00:48:35 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main( void )
{
    {
        std::cout << "DiamondTrap TEST: " << std::endl;
        DiamondTrap    robot("maemran");
        DiamondTrap    robot2 = robot;

        // Test attack from ScavTrap
        robot2.attack("mohammad");

        // Test takeDamage (ClapTrap)
        robot2.takeDamage(30);

        // Test beRepaired (ClapTrap)
        robot2.beRepaired(15);

        // Special ability from FragTrap
        robot2.highFivesGuys();

        // Special ability from ScavTrap
        robot2.guardGate();

        // DiamondTrap's unique function
        robot2.whoAmI();

        // More damage + repair
        robot2.takeDamage(60);
        robot2.beRepaired(10);

        robot2.takeDamage(100); // destroy
    }

    return (0);
}
