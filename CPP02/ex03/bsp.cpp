/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 23:06:56 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 11:58:40 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed area(Point const &p1, Point const &p2, Point const &p3)
{
    Point v1 = p2 - p1;
    Point v2 = p3 - p1;

    Fixed cross = v1.getX() * v2.getY() - v1.getY() * v2.getX();

    if (cross < Fixed(0))
        cross = cross * Fixed(-1);
    
    Fixed   result = cross / Fixed(2);
    return (result);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed A  = area(a, b, c);
    Fixed A1 = area(point, b, c);
    Fixed A2 = area(a, point, c);
    Fixed A3 = area(a, b, point);

    if ((A == A1 + A2 + A3) && (A1 > Fixed(0)) && (A2 > Fixed(0)) && (A3 > Fixed(0)))
        return (1);
    return (0);
}
