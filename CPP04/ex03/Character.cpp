/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 14:32:47 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 18:25:00 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	floor = 0;
}

Character::Character(const std::string& name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	floor = 0;
}

Character::Character(const Character& other)
{
	this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
        else
            inventory[i] = 0;
    }
	floor = 0;
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 4; i++)
        {
            delete inventory[i];
            inventory[i] = 0;
        }
        clearFloor();
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if (other.inventory[i])
                inventory[i] = other.inventory[i]->clone();
            else
                inventory[i] = 0;
        }
    }
    return (*this);
}

void Character::clearFloor()
{
	while (floor)
	{
		t_FloorNode* tmp = floor;
		floor = floor->next;
		delete tmp->materia;
		delete tmp;
	}
}
Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete inventory[i];
	clearFloor();
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    if (!m)
		return;
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
		return;
    if (!inventory[idx])
		return;
    t_FloorNode* newNode = new t_FloorNode;
    newNode->materia = inventory[idx];
    newNode->next = floor;
    floor = newNode;
    inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
		return;
    if (inventory[idx])
        inventory[idx]->use(target);
}
