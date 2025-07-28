/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 18:38:43 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 11:48:41 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::passing_info()
{   
    std::cout << std::endl << "\033[38;5;208m> Enter first name please:\033[0m " << std::endl;
    std::cin >> first_name;
    std::cout << "\033[38;5;208m> Enter last name please:\033[0m " << std::endl;
    std::cin >> last_name;
    std::cout << "\033[38;5;208m> Enter nickname:\033[0m " << std::endl;
    std::cin >> nickname;
    std::cout << "\033[38;5;208m> Enter darkest secret:\033[0m " << std::endl;
    std::cin >> darkest_secret;
    std::cout << "\033[38;5;208m> phone number:\033[0m " << std::endl;
    std::cin >> phone_number;
    if (!digits_check(phone_number))
    {
        while (1)
        {
            std::cout << "\033[38;5;196mInvalid input,\033[0m Please enter digits only: " << std::endl;
            std::cin >> phone_number;
            if (digits_check(phone_number))
                break;
        }
    }
    std::cout << std::endl;
}