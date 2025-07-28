/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:47:26 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 11:11:33 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>

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

int main(void)
{
    int flag = 1;
    int index;
    PhoneBook list;
    while (flag)
    {
        prompt();
        std::string choice;
        std::cin >> choice;
        if (choice == "ADD")
        {
            Contact info;
            info.passing_info();
            list.add_contact_info(info);
        }
        else if (choice == "SEARCH")
        {
            searching_table();
            for (int i = 0; i < PhoneBook::count; i++)
            {
                std::cout << std::setw(10) << std::left << i << "|" << std::setw(10) << std::left << truncate_str(list.contacts[i].first_name) << "|";
                std::cout << std::setw(10) << std::left << truncate_str(list.contacts[i].last_name) << "|" << std::setw(10) << std::left << truncate_str(list.contacts[i].nickname);
                std::cout << std::endl;
            }
            std::cout << "\033[38;5;46m> Enter index of contact:\033[0m " << std::endl;
            std::cin >> index;
            std::cout << std::endl;
            if (index < PhoneBook::count && index >= 0)
            {
                std::cout << "\033[38;5;201m▸ first name:\033[0m " << list.contacts[index].first_name << std::endl;
                std::cout << "\033[38;5;201m▸ last name:\033[0m " << list.contacts[index].last_name << std::endl;
                std::cout << "\033[38;5;201m▸ nickname:\033[0m " << list.contacts[index].nickname << std::endl;
                std::cout << "\033[38;5;201m▸ phone number:\033[0m " << list.contacts[index].phone_number << std::endl;
                std::cout << "\033[38;5;201m▸ darkest_secret:\033[0m " << list.contacts[index].darkest_secret << std::endl;
            }
            else
                std::cout << "\033[38;5;196mInvalid index\033[0m" << std::endl;
            std::cout << std::endl;
        }
        else if (choice == "EXIT")
            flag = 0;
    }
    return (0);
}
