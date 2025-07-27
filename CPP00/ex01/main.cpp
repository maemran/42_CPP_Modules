/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:47:26 by maemran           #+#    #+#             */
/*   Updated: 2025/07/27 20:46:35 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>
#include "Contact.hpp"

int digits_check(std::string str)
{
    int i;
    int length;

    i = 0;
    length = str.length();
    while (i < length)
    {
        if (std::isdigit(str[i]) == 0)
            return (0);
        i++;
    }
    return (1);
}

int add_object(Contact info)
{   
    std::cout << "Enter first name please: " << std::endl;
    std::cin >> info.first_name;
    std::cout << "Enter last name please: " << std::endl;
    std::cin >> info.last_name;
    std::cout << "Enter nikname: " << std::endl;
    std::cin >> info.nickname;
    std::cout << "Enter darkest secret: " << std::endl;
    std::cin >> info.darkest_secret;
    std::cout << "phone number: " << std::endl;
    std::cin >> info.phone_number;
    if (!digits_check(info.phone_number))
    {
        std::cout << "Invalid input. Please enter digits only." << std::endl;
        return (0);
    }
    return (1);
}

int main(void)
{
    int flag = 1;
    while (flag)
    {
        std::cout << "Select one of this choices: " << std::endl;
        std::cout << "ADD || SEARCH || EXIT" << std::endl;
        std::string choice;
        std::cin >> choice;
        if (choice == "ADD")
        {
            Contact info;
            if (!add_object(info))
                return (1);
        }
        else if (choice == "SEARCH")
        {
            
        }
        else if (choice == "EXIT")
            flag = 0;
        else
        {
            
        }
    }
}