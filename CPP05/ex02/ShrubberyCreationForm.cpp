/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:13:07 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 16:18:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137, false), _target("default")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm("ShrubberyCreationForm", 145, 137, false), _target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
	: AForm(other), _target(other._target)
{}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->excutionCheck(executor);
	std::ofstream file((this->_target + "_shrubbery").c_str());
	if (!file)
        throw std::runtime_error("could not create shrubbery file");
	file <<     "                           ###\n";
	file <<		"                          #o###\n";
	file <<		"                        #####o###\n";
	file <<		"                       #o#\\#|#/###\n";
	file <<		"                        ###\\|/#o#\n";
	file <<		"                         # }|{  #\n";
	file <<		"                           }|{\n";
	file <<		"                           | |  \n";
	file <<		"                        __/ | \\__\n";
	file <<		"                       /____^____\\\n";
	file.close();
}
