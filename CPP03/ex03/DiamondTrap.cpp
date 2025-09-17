/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:43:29 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 11:44:48 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() 
{
        std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = "";
        ClapTrap::_name = "_clap_name";
        _HitPoints = FragTrap::_HitPoints;
        _EnergyPoints = ScavTrap::_EnergyPoints;
        _AttackDamage = FragTrap::_AttackDamage;
}


DiamondTrap::DiamondTrap( const DiamondTrap& other )
        :ClapTrap(other) , FragTrap(other), ScavTrap(other)
{
        std::cout << "DiamondTrap Copy constructor called" << std::endl;
        _name = other._name;
        ClapTrap::_name = _name + "_clap_name";
        _HitPoints = FragTrap::_HitPoints;
        _EnergyPoints = ScavTrap::_EnergyPoints;
        _AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap::DiamondTrap( const std::string& name)
{
        std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
        _name = name;
        ClapTrap::_name = _name + "_clap_name";
        _HitPoints = FragTrap::_HitPoints;
        _EnergyPoints = ScavTrap::_EnergyPoints;
        _AttackDamage = FragTrap::_AttackDamage;
}

DiamondTrap&   DiamondTrap::operator=( const DiamondTrap& other )
{
        std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
        if (this != &other)
        {
                _name = other._name;
                ClapTrap::_name = _name + "_clap_name";
                _HitPoints = FragTrap::_HitPoints;
                _EnergyPoints = ScavTrap::_EnergyPoints;
                _AttackDamage = FragTrap::_AttackDamage;
        }
        return (*this);
}

DiamondTrap::~DiamondTrap()
{
        std::cout << "DiamondTrap Destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
        std::cout << "DiamondTrap name: " << _name << std::endl;
        std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
}