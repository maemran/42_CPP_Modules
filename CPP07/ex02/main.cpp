/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:19:50 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 00:54:56 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    try {
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); i++)
            a[i] = (i * 10);
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << std::endl;
        
        std::cout << "-----------------------------------" << std::endl;
        
        Array<int> b(a);
        for (unsigned int i = 0; i < b.size(); i++)
            std::cout << b[i] << std::endl;

        std::cout << "-----------------------------------" << std::endl;
        
        // b[5] = 4;

        std::cout << "-----------------------------------" << std::endl;
        
        Array<int> c(6);
        for (unsigned int i = 0; i < c.size(); i++)
            c[i] = (i * 15);
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << c[i] << std::endl;

        a = c;
        std::cout << "display a = c values" << std::endl;
        for (unsigned int i = 0; i < a.size(); i++)
            std::cout << a[i] << std::endl;
        
        std::cout << "-----------------------------------" << std::endl;
    }
    catch (std::out_of_range& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}