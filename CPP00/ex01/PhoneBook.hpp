/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:29:28 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 00:51:19 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"

class   PhoneBook
{
    private:
        Contact new_contacts[8];
    public:
        Contact contacts[8];
        static int count;
        
        PhoneBook();
        ~PhoneBook();
        void add_contact_info(Contact info);
};

#endif