/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 22:55:48 by maemran           #+#    #+#             */
/*   Updated: 2026/02/06 23:18:06 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> void  swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}
template <typename T> T min(T x, T y)
{
    if (x == y)
        return y;
    else if (x < y)
        return (x);
    return (y);
    
}
template <typename T> T max(T x, T y)
{
    if (x == y)
        return y;
    else if (x > y)
        return x;
    return y;
}

#endif