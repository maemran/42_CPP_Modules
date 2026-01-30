/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 00:49:12 by maemran           #+#    #+#             */
/*   Updated: 2026/01/31 01:14:03 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a("mohammad", 150);
    std::cout << a << std::endl;
    try {
        a.decrementGrade(1);
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    std::cout << a << std::endl;

    try {
        a.incrementGrade(151);
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << e.what() << std::endl;
    }
}