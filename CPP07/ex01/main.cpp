/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 00:38:37 by maemran           #+#    #+#             */
/*   Updated: 2026/02/07 01:09:29 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <string>

int main(void)
{
    int arr[] = {1, 3, 4};
    const int array[] = {5 , 2};
    std::string str[] = {"ss", "w"};

    iter(arr, 3, func1<int>);
    std::cout << "------------------" << std::endl;
    iter(array, 2, func2<int>);
    std::cout << "------------------" << std::endl;
    iter(str, 2, func1<std::string>);
}