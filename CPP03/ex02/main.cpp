/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:58:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 21:17:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main( void )
{
    {
        std::cout << "FragTrap TEST: " << std::endl;
        FragTrap    robot("maemran");
        FragTrap    robot2 = robot;
        
        robot2.attack("mohammad");
        
        robot2.takeDamage(35);
        
        robot2.highFivesGuys();
        
        robot2.beRepaired(2);
        
        robot2.takeDamage(67);
        
        robot2.highFivesGuys();
        
        robot2.takeDamage(1);
        
        robot2.beRepaired(2);
    }
    /******************************/
    
    {
       std::cout << "\nScavTrap TEST: " << std::endl;
        ScavTrap    robot("maemran");
        
        robot.attack("mohammad");
        
        robot.takeDamage(35);
        
        robot.guardGate();
        
        robot.beRepaired(2);
        
        robot.takeDamage(67);

        robot.guardGate();
        
        robot.takeDamage(1);
        
        robot.beRepaired(2);
    }

    return (0);
}
