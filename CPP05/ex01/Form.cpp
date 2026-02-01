/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:06:34 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 12:45:16 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	:_name("anything"), _gradeToSign(75), _gradeToExecute(75)
{
	_isSign = 0;	
}
Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute, bool isSign)
	:_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw	Form::GradeTooHighException("Form Grade too high");
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw	Form::GradeTooLowException("Form Grade too low");
	_isSign = isSign;
}

Form::Form( const Form& other )
	:_name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	_isSign = other._isSign;
}

Form&	Form::operator=( const Form& other )
{
	if (this != &other)
		_isSign = other._isSign;
	return (*this);
}

Form::~Form() {}

const std::string&	Form::getName() const
{
	return (_name);
}

int	Form::getGTSign() const
{
	return(_gradeToSign);
}

int Form::getGTExecute() const
{
	return(_gradeToExecute);
}

bool	Form::getIsSign() const
{
	return (_isSign);	
}

Form::GradeTooHighException::GradeTooHighException()
	:_errorMsg("error") 
{}

Form::GradeTooHighException::GradeTooHighException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}

const char *Form::GradeTooHighException::what() const throw()
{
	return (_errorMsg);
}

Form::GradeTooLowException::GradeTooLowException()
	:_errorMsg("error") 
{}

Form::GradeTooLowException::GradeTooLowException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}

const char *Form::GradeTooLowException::what() const throw()
{
	return (_errorMsg);
}
std::ostream&	operator<<( std::ostream& os, const Form& obj )
{
	os << "Name: " << obj.getName() << " | Signed: " << obj.getIsSign() << " | Sign grade: "
		<< obj.getGTSign() << " | Execute grade: " << obj.getGTExecute();
	return (os);
}

void  Form::beSigned( const Bureaucrat& obj )
{
	if (obj.getGrade() > _gradeToSign)
		throw	Form::GradeTooLowException("Grade too low to sign");
	_isSign = true;
}
