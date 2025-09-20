/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:50:41 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 18:05:57 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
    type = "ice";
}

Ice::Ice( const Ice& other )
{
    this->type = other.type;
}

Ice&   Ice::operator=( const Ice& other )
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
