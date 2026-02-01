/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:02:25 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 17:07:30 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	AForm*	rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	delete rrf;
	return 0;
}