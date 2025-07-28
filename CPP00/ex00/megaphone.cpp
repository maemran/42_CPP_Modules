/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 01:06:47 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 18:22:04 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int main(int argc, char *argv[])
{
    int length;
    int len;
    int i;
    std::string str;
    
    length = 1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (1);
    }
    while (argv[length])
    {
        i = 0;
        str = argv[length];
        len = str.length();
        while (i < len)
        {
            std::cout << (char)std::toupper(str[i]);
            i++;
        }
        std::cout << " ";
        length++;
    }
    std::cout << std::endl;
    return (0);
}
