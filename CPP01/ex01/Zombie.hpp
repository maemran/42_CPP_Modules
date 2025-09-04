/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:53:35 by maemran           #+#    #+#             */
/*   Updated: 2025/09/04 10:05:55 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();
        void    setName(std::string name);
        std::string    getName( void ) const;
        void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif