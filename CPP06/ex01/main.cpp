/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:57:27 by maemran           #+#    #+#             */
/*   Updated: 2026/02/06 21:10:17 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data*	data = new Data;
	
	data->name = "mohammad";
	data->value = 2;

	uintptr_t	ptr1 = Serializer::serialize(data);
	Data	*ptr2 = Serializer::deserialize(ptr1);

	std::cout << "data->name: " << data->name << ", data->value: " << data->value << std::endl;
	std::cout << "ptr2->name: " << ptr2->name << ", ptr2->value: " << ptr2->value << std::endl;
	delete data;
	return 0;
}
