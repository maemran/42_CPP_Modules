/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:03:12 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 13:30:40 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_contacts.hpp"

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

std::string truncate_str(std::string str)
{
    int length;
    std::string new_str;

    length = str.length();
    if (length < 10)
        return (str);
    new_str = str.substr(0, 10);
    new_str[9] = '.';
    return (new_str);
}

void    searching_table(void)
{
    std::cout << std::setw(10) << std::left << "index";
    std::cout << "|";
    std::cout << std::setw(10) << std::left << "first name";
    std::cout << "|";
    std::cout << std::setw(10) << std::left << "last name";
    std::cout << "|";
    std::cout << std::setw(10) << std::left << "nickname" << std::endl;
}

void    prompt(void)
{
    std::cout << "\033[38;5;46m> SYSTEM: PHONEBOOK INTERFACE \033[0m" << std::endl;
    std::cout << "\033[38;5;46m> COMMAND OPTIONS:\033[0m" << std::endl;
    std::cout << "  ▸ \033[32mADD     \033[0m→ Add new contact" << std::endl;
    std::cout << "  ▸ \033[33mSEARCH  \033[0m→ View saved contacts" << std::endl;
    std::cout << "  ▸ \033[31mEXIT    \033[0m→ Terminate session" << std::endl;
    std::cout << "\033[38;5;46m> Awaiting input:\033[0m" << std::endl;
}

void    print_info(PhoneBook list, int n_index)
{
    std::cout << "\033[38;5;201m▸ first name:\033[0m " << list.contacts[n_index].first_name << std::endl;
    std::cout << "\033[38;5;201m▸ last name:\033[0m " << list.contacts[n_index].last_name << std::endl;
    std::cout << "\033[38;5;201m▸ nickname:\033[0m " << list.contacts[n_index].nickname << std::endl;
    std::cout << "\033[38;5;201m▸ phone number:\033[0m " << list.contacts[n_index].phone_number << std::endl;
    std::cout << "\033[38;5;201m▸ darkest_secret:\033[0m " << list.contacts[n_index].darkest_secret << std::endl;
}
