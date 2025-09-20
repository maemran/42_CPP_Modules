/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:35:47 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 18:05:06 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    type = "";
}

AMateria::AMateria( std::string const & type )
{
    this->type = type;
}

AMateria::AMateria( const AMateria& other )
{
    this->type = other.type;
}

AMateria&   AMateria::operator=( const AMateria& other )
{
    if (this != &other)
        this->type = other.type;
    return (*this);
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* does nothing to " << target.getName() << " *" << std::endl;
}
