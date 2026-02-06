/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 00:00:26 by maemran           #+#    #+#             */
/*   Updated: 2026/02/07 01:08:48 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void func2(const T& x)
{
    std::cout << x << std::endl;
}

template <typename T>
void func1(T& x)
{
    std::cout << x << std::endl;
}

template <typename T1, typename T2>
void iter(T1* arr, const int len, T2 func)
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

#endif