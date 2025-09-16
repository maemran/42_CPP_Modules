/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:58:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 19:45:28 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int     main( void )
{
    {
        std::cout << "TEST ONE: " << std::endl;
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
    /******************************/
    
    {
        std::cout << "\nTEST TWO: " << std::endl;
        ScavTrap    robot("maemran");
        
        for (int i = 0; i < 51; i++)
            robot.attack("anonymous");
    }

    return (0);
}
