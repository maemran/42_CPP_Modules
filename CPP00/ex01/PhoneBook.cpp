/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:10 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 01:56:24 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {};

PhoneBook::~PhoneBook() {};

int PhoneBook::count = 0;

void PhoneBook::add_contact_info(Contact info)
{
    if (count < 8)
    {
        contacts[count] = info;
        count++;
    }
    else 
    {
        for (int i = 0; i < 7; i++)
            new_contacts[i] = contacts[i + 1];
        new_contacts[7] = info;
        for (int i = 0; i < 8; i++)
            contacts[i] = new_contacts[i];
    }
}