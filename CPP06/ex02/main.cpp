/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 19:34:37 by maemran           #+#    #+#             */
/*   Updated: 2026/02/06 22:19:38 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "util.hpp"

int main(void)
{
    Base* base = generate();
    Base& ref = *base;
    identify(base);
    identify(ref);
    delete base;
    return 0;
}
