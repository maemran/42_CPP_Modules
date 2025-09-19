/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:50:41 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 01:24:47 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

        // Ice();
        // Ice( const Ice& other );
        // Ice&   operator=( const Ice& other );
        // ~Ice();
        
        // AMateria* clone() const;
        // void use(ICharacter& target);

#include "Ice.hpp"

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
    AMateria*   obj = new Ice(*this);
    return (obj);
}

void Ice::use(ICharacter& target)
{
    std::cout << 
}