/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:52:55 by maemran           #+#    #+#             */
/*   Updated: 2025/09/17 14:10:19 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned	int	FragTrap::HitPoints = 100;
unsigned	int FragTrap::AttackDamage = 30;

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_name = "";
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap( const std::string& name )
    :ClapTrap(name)
{
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 100;
	_AttackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& other )
    :ClapTrap(other)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	this->_name = other._name;
	this->_HitPoints = other._HitPoints;
	this->_EnergyPoints = other._EnergyPoints;
	this->_AttackDamage = other._AttackDamage;
}

FragTrap&	FragTrap::operator=( const FragTrap& other )
{
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void ) 
{
	if (_HitPoints == 0)
    {
        std::cout << "\033[1;31mFragTrap " << _name
			<< " is destroyed!\033[0m" << std::endl;
		return ;
    }
    std::cout << "\033[38;5;51mFragTrap " << _name
	<< " requests a positive high five! \033[0m" << std::endl;
}
