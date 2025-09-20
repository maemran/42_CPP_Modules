/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 11:27:53 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 17:56:40 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

typedef struct s_FloorNode
{
	AMateria* materia;
	s_FloorNode* next;
}	t_FloorNode;

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria*   inventory[4];
    	t_FloorNode* floor;

		public:
        Character();
        Character(const std::string& name);
        Character(const Character& other);
        Character& operator=(const Character& other);
        ~Character();
		
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
		void clearFloor();
};

#endif