/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:50:44 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 13:08:11 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);

    Point p1(5.0f, 5.0f);
    Point p2(5.0f, 0.0f);
    Point p3(10.0f, 10.0f);
    Point p4(3.0f, 4.0f);
	
    std::cout << "Point (5,5)   -> " << bsp(a, b, c, p1) << std::endl;
    std::cout << "Point (5,0)   -> " << bsp(a, b, c, p2) << std::endl;
    std::cout << "Point (10,10) -> " << bsp(a, b, c, p3) << std::endl;
    std::cout << "Point (3,4)   -> " << bsp(a, b, c, p4) << std::endl;
	
	return (0);
}

//y=10           .     C(5,10)                  P3(10,10)
//               |        *
//y=9            |       / \
//y=8            |      /   \
//y=7            |     /     \
//y=6            |    /       \
//y=5            |   /   P1*   \
//y=4            |  /  P4*      \
//y=3            | /             \
//y=2            |/               \
//y=1            *-----------------*
//y=0            A(0,0)    P2*     B(10,0)
