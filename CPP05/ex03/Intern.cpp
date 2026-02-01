/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:52:48 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 17:00:51 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& other)
{
	(void)other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return (*this);
}

Intern::~Intern() {}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target) const
{
	std::string	formNames[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	AForm*		forms[3] = {
		new ShrubberyCreationForm(target),
		new RobotomyRequestForm(target),
		new PresidentialPardonForm(target)
	};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << " form." << std::endl;
			for (int j = 0; j < 3; j++)
			{
				if (j != i)
					delete forms[j];
			}
			return (forms[i]);
		}
	}
	std::cout << "Intern could not find the form: " << formName << std::endl;
	for (int j = 0; j < 3; j++)
	{
		delete forms[j];
	}
	return (0);
}
