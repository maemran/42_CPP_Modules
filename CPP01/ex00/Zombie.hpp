/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 16:54:31 by maemran           #+#    #+#             */
/*   Updated: 2025/09/03 20:20:45 by maemran          ###   ########.fr       */
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
        void    announce( void );
        Zombie();
        Zombie(std::string name);
        ~Zombie();
	};

void		newZ( std::string name);
Zombie*     newZombie( std::string name );
void        randomChump( std::string name );

#endif
