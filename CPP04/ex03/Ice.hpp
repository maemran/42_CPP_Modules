/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:42:01 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 00:49:19 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class   Ice: public AMateria
{
    public:
        Ice();
        Ice( const Ice& other );
        Ice&   operator=( const Ice& other );
        ~Ice();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif