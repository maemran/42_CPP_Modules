/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:58:59 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 16:14:52 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int     main( void )
{
    {
        std::cout << "TEST ONE: " << std::endl;
        ClapTrap    robot1("maemran");
        
        robot1.attack("mohammad");
        
        robot1.takeDamage(9);
        
        robot1.beRepaired(2);
        
        robot1.takeDamage(3);

        robot1.takeDamage(1);
        
        robot1.beRepaired(2);
    }
    /******************************/
    
    {
        std::cout << "\nTEST TWO: " << std::endl;
        ClapTrap    robot2("maemran");
        
        for (int i = 0; i < 11; i++)
            robot2.attack("anonymous");
    }

    return (0);
}