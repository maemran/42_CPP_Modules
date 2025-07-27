/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:38:43 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 00:40:43 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int Contact::digits_check(std::string str)
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

void Contact::passing_info()
{   
    std::cout << "Enter first name please: " << std::endl;
    std::cin >> first_name;
    std::cout << "Enter last name please: " << std::endl;
    std::cin >> last_name;
    std::cout << "Enter nickname: " << std::endl;
    std::cin >> nickname;
    std::cout << "Enter darkest secret: " << std::endl;
    std::cin >> darkest_secret;
    std::cout << "phone number: " << std::endl;
    std::cin >> phone_number;
    if (!digits_check(phone_number))
    {
        while (1)
        {
            std::cout << "Invalid input, Please enter digits only: " << std::endl;
            std::cin >> phone_number;
            if (digits_check(phone_number))
                break;
        }
    }
}