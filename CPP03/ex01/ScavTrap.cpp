/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:54:28 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 19:44:10 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_name = "";
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap( const std::string& name )
    :ClapTrap(name)
{
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& other )
    :ClapTrap(other)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& other )
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (_HitPoints == 0)
    {
        std::cout << "\033[1;31mClapTrap " << _name 
			<< " is destroyed!\033[0m" << std::endl;
		return ;
    }
    std::cout << "\033[38;5;51mScavTrap " << _name
        << " is now in Gate Keeper mode.\033[0m" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (_EnergyPoints == 0 || _HitPoints == 0)
	{
		std::cout << "\033[1;31mScavTrap " << _name << " cannot attack!\033[0m" << std::endl;
		return ;
	}
	_EnergyPoints -= 1;
	std::cout << "\033[38;5;46mScavTrap " << _name << " attacks " << target 
			<< ", causing " << _AttackDamage << " points of damage!\033[0m" 
			<< std::endl << "\033[38;5;201mEnergy Points: " << _EnergyPoints
			<< "\033[0m" << std::endl;
}
