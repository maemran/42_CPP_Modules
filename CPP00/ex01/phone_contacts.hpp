/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_contacts.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 13:00:19 by maemran           #+#    #+#             */
/*   Updated: 2025/07/28 14:50:48 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_CONTATCTS_H
#define PHONE_CONTATCTS_H

#include "PhoneBook.hpp"

#include <iomanip>
#include <sstream>

int             digits_check(std::string str);
std::string     truncate_str(std::string str);
void            searching_table(void);
void            prompt(void);
void            print_info(PhoneBook list, int n_index);


#endif
