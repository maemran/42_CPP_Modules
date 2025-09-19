/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:35:47 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 00:40:57 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

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
