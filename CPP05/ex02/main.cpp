/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:02:25 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 16:24:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try 
	{
		Bureaucrat	bureaucrat("Alice", 26);
		ShrubberyCreationForm	shrubberyForm("Home");
		RobotomyRequestForm		robotomyForm("Bob");
		PresidentialPardonForm	presidentialForm("Charlie");

		//bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);

		bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);

		bureaucrat.signForm(presidentialForm);
		bureaucrat.executeForm(presidentialForm);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Bureaucrat creation failed: " << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Bureaucrat creation failed: " << e.what() << std::endl;
	}
	catch (AForm::GradeTooHighException& e)
	{
		std::cout << "Form operation failed: " << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e)
	{
		std::cout << "Form operation failed: " << e.what() << std::endl;
	}
	catch (AForm::FormNotSignedException& e)
	{
		std::cout << "Form execution failed: " << e.what() << std::endl;
	}
	catch (AForm::ExecutionGradeTooLowException& e)
	{
		std::cout << "Form execution failed: " << e.what() << std::endl;
	}

	return 0;
}