/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:18:55 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 13:07:11 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class   Point
{
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point( const float x, const float y );
        Point( const Point& pointCopy );
        Point&  operator=( const Point& point );
        ~Point();
        
        Fixed  getX( void ) const;
        Fixed  getY( void ) const;

        Point  operator-( const Point& point ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif