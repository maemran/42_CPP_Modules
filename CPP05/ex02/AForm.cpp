/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:06:34 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 15:17:03 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
	:_name("anything"), _gradeToSign(75), _gradeToExecute(75)
{
	_isSign = 0;	
}
AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute, bool isSign)
	:_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw	AForm::GradeTooHighException("Form Grade too high");
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw	AForm::GradeTooLowException("Form Grade too low");
	_isSign = isSign;
}

AForm::AForm( const AForm& other )
	:_name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
	_isSign = other._isSign;
}

AForm&	AForm::operator=( const AForm& other )
{
	if (this != &other)
		_isSign = other._isSign;
	return (*this);
}

AForm::~AForm() {}

const std::string&	AForm::getName() const
{
	return (_name);
}

int	AForm::getGTSign() const
{
	return(_gradeToSign);
}

int AForm::getGTExecute() const
{
	return(_gradeToExecute);
}

bool	AForm::getIsSign() const
{
	return (_isSign);	
}

AForm::GradeTooHighException::GradeTooHighException()
	:_errorMsg("error") 
{}

AForm::GradeTooHighException::GradeTooHighException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}

const char *AForm::GradeTooHighException::what() const throw()
{
	return (_errorMsg);
}

AForm::GradeTooLowException::GradeTooLowException()
	:_errorMsg("error") 
{}

AForm::GradeTooLowException::GradeTooLowException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}

const char *AForm::GradeTooLowException::what() const throw()
{
	return (_errorMsg);
}
std::ostream&	operator<<( std::ostream& os, const AForm& obj )
{
	os << "Name: " << obj.getName() << " | Signed: " << obj.getIsSign() << " | Sign grade: "
		<< obj.getGTSign() << " | Execute grade: " << obj.getGTExecute();
	return (os);
}

void  AForm::beSigned( const Bureaucrat& obj )
{
	if (obj.getGrade() > _gradeToSign)
		throw	AForm::GradeTooLowException("Grade too low to sign");
	_isSign = true;
}

void AForm::excutionCheck(Bureaucrat const & executor) const
{
	if (this->getIsSign() == false)
		throw AForm::FormNotSignedException("Form is not signed. Cannot execute.");
	if (executor.getGrade() > this->getGTExecute())
		throw AForm::ExecutionGradeTooLowException("Bureaucrat's grade too low to execute the form.");
}

AForm::FormNotSignedException::FormNotSignedException()
	:_errorMsg("error") 
{}

AForm::FormNotSignedException::FormNotSignedException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}

const char *AForm::FormNotSignedException::what() const throw()
{
	return (_errorMsg);
}

AForm::ExecutionGradeTooLowException::ExecutionGradeTooLowException()
	:_errorMsg("error") 
{}

AForm::ExecutionGradeTooLowException::ExecutionGradeTooLowException(const char *errorMsg)
	:_errorMsg(errorMsg)
{}
const char *AForm::ExecutionGradeTooLowException::what() const throw()
{
	return (_errorMsg);
}
