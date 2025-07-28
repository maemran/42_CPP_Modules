/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:47:26 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 13:30:33 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_contacts.hpp"

int main(void)
{
    int flag = 1;
    int n_index;
    std::string s_index;
    std::string choice;
    PhoneBook list;
    while (flag)
    {
        prompt();
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
            std::cin >> s_index;
            std::cout << std::endl;
            if (!digits_check(s_index))
            {
                while (1)
                {
                    std::cout << "\033[38;5;196mInvalid input,\033[0m Please enter digits only: " << std::endl;
                    std::cin >> s_index;
                    if (digits_check(s_index))
                        break;
                }
            }
            std::stringstream input(s_index);
            input >> n_index;
            if (n_index < PhoneBook::count && n_index >= 0)
                print_info(list, n_index);
            else
                std::cout << "\033[38;5;196mInvalid index\033[0m" << std::endl;
            std::cout << std::endl;
        }
        else if (choice == "EXIT")
            flag = 0;
    }
    return (0);
}
