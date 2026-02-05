/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:36:44 by maemran           #+#    #+#             */
/*   Updated: 2026/02/05 19:38:36 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

Base* generate(void)
{
	srand(time(NULL));
	int random = rand() % 3;
	
	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else
		return new C();
}