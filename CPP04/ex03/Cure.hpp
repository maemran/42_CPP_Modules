/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:47:43 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 00:49:24 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class   Cure: public AMateria
{
    public:
        Cure();
        Cure( const Cure& other );
        Cure&   operator=( const Cure& other );
        ~Cure();
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif