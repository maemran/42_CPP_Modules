/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:47:26 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 02:13:30 by maemran          ###   ########.fr       */
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

int main(void)
{
    int flag = 1;
    int index;
    PhoneBook list;
    while (flag)
    {
        std::cout << "Select one of this choices: " << std::endl;
        std::cout << "ADD || SEARCH || EXIT" << std::endl;
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
            std::cout << "Enter index of contact: " << std::endl;
            std::cin >> index;
            if (index < PhoneBook::count && index >= 0)
            {
                std::cout << "first name: " << list.contacts[index].first_name << std::endl;
                std::cout << "last name: " << list.contacts[index].last_name << std::endl;
                std::cout << "nickname: " << list.contacts[index].nickname << std::endl;
                std::cout << "phone number: " << list.contacts[index].phone_number << std::endl;
                std::cout << "darkest_secret: " << list.contacts[index].darkest_secret << std::endl;
            }
            else 
                std::cout << "Invalid index" << std::endl; 
        }
        else if (choice == "EXIT")
            flag = 0;
    }
    return (0);
}
