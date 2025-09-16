/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:11:03 by maemran           #+#    #+#             */
/*   Updated: 2025/09/16 19:20:52 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
	_name = "";
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap( const std::string& name )
{
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
	_name = name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& other )
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& other )
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (_EnergyPoints == 0 || _HitPoints == 0)
	{
		std::cout << "\033[1;31mClapTrap " << _name << " cannot attack!\033[0m" << std::endl;
		return ;
	}
	_EnergyPoints -= 1;
	std::cout << "\033[38;5;46mClapTrap " << _name << " attacks " << target 
			<< ", causing " << _AttackDamage << " points of damage!\033[0m" 
			<< std::endl << "\033[38;5;201mEnergy Points: " << _EnergyPoints 
			<< "\033[0m" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (_HitPoints == 0)
	{
		std::cout << "\033[1;31mClapTrap " << _name 
			<< " is destroyed!\033[0m" << std::endl;
		return ;
	}
	else if (_HitPoints <= amount)
	{
		_HitPoints = 0;
		std::cout << "\033[1;31mClapTrap " << _name << " takes " << amount 
			<< " points of damage and is destroyed!\033[0m" << std::endl;
		return ;
	}
	_HitPoints -= amount;
	std::cout << "\033[38;5;46mClapTrap " << _name << " takes " << amount 
		<< " points of damage! Now has " << _HitPoints << " hit points.\033[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_EnergyPoints == 0 || _HitPoints == 0)
	{
		std::cout << "\033[1;31mClapTrap " << _name <<  " cannot repair!\033[0m" << std::endl;
		return ;
	}
	_HitPoints += amount;
	_EnergyPoints -= 1;
	std::cout << "\033[38;5;46mClapTrap " << _name << " repairs itself, regaining " 
		<< amount << " hit points!\033[0m" << std::endl << "\033[38;5;201mEnergy Points: " 
		<< _EnergyPoints << "\033[0m" << std::endl;
}
