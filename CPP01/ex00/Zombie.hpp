/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:54:31 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 00:04:01 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        Zombie(std::string name);
        void    announce( void );
};

Zombie*     newZombie( std::string name );
void        randomChump( std::string name );

#endif
