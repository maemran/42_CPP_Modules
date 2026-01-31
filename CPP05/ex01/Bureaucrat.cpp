/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 00:07:55 by maemran           #+#    #+#             */
/*   Updated: 2026/01/31 01:13:52 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    _name = "Unknown";
    _grade = 150;
}

Bureaucrat::Bureaucrat( const std::string  &name, int grade )
{
    _name = name;
    _grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other )
{
    _name = other._name;
    _grade = other._grade;
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
    if (this != &other)
    {
        _name = other._name;
        _grade = other._grade;
    }
    return (*this);
}

Bureaucrat::~Bureaucrat() {}

const std::string&    Bureaucrat::getName() const
{
    return (_name);
}

int Bureaucrat::getGrade() const
{
    return (_grade);
}


Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    _errorMsg = "error";
}

Bureaucrat::GradeTooHighException::GradeTooHighException( const char *errorMsg )
{
    _errorMsg = errorMsg;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return (_errorMsg);
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    _errorMsg = "error";
}

Bureaucrat::GradeTooLowException::GradeTooLowException( const char *errorMsg ) 
{
    _errorMsg = errorMsg;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return (_errorMsg);
}

void    Bureaucrat::incrementGrade(int num)
{
    _grade -= num;
    if (_grade < 1)
        throw GradeTooHighException("The grade is less than 1");
}
void    Bureaucrat::decrementGrade(int num)
{
    _grade += num;
    if (_grade > 150)
        throw   GradeTooLowException("the garde is more than 150");
}

std::ostream&  operator<<( std::ostream& os, const Bureaucrat& obj )
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
    return (os);
}