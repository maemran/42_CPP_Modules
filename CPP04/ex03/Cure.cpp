/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:48:50 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 18:05:45 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
    type = "cure";
}

Cure::Cure(const Cure& other)
{
    this->type = other.type;
}

Cure& Cure::operator=( const Cure& other )
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}