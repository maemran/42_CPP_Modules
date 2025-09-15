/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 22:29:10 by maemran           #+#    #+#             */
/*   Updated: 2025/09/15 11:42:27 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
    :_x(0) , _y(0) {}

Point::Point( const Point& pointCopy )
        :_x(pointCopy._x), _y(pointCopy._y) {}

Point::Point( const float x, const float y )
    :_x(x) , _y(y) {}

Point&  Point::operator=( const Point& point )
{
    (void)point;
	return (*this);
}

Point::~Point() {}

Point Point::operator-( const Point& point ) const
{
    Fixed x = this->_x;
    Fixed y = this->_y;

    Fixed xResult = x - point._x;
    Fixed yResult = y - point._y;
    return (Point(xResult.toFloat() , yResult.toFloat()));
}

// const Fixed&  getX( void );
//         const Fixed&  getY( void );

Fixed&  Point::getX( void ) const
{
    Fixed  temp = _x;
    return (temp);
}

Fixed&  Point::getY( void ) const
{
    Fixed   temp = _y;
    return (temp);
}