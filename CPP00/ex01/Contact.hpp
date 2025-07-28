/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:47:30 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 14:51:37 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <cctype>
#include <iostream>

int digits_check(std::string str);

class   Contact
{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
        
        void passing_info();
        Contact();
        ~Contact();
};

#endif