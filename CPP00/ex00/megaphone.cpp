/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 01:06:47 by maemran           #+#    #+#             */
/*   Updated: 2025/07/27 01:42:02 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
    int length;
    int i;

    length = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    while (argv[length])
    {
        i = 0;
        while (argv[length][i])
        {
            std::cout << (char)std::toupper(argv[length][i]);
            i++;
        }
        length++;
    }
    std::cout << std::endl;
    return (0);
}
