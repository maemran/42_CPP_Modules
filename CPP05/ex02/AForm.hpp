/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:06:37 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 15:16:37 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	_name;
		const	int _gradeToSign;
		const	int _gradeToExecute;
		bool	_isSign;

	public:
		AForm();
		AForm(const std::string name, const int gradeToSign, const int gradeToExecute, bool isSign);
		AForm( const AForm& other );
		AForm&	operator=( const AForm& other );
		~AForm();

		const std::string&	getName() const;
		int	getGTSign() const;
		int getGTExecute() const;
		bool	getIsSign() const;

		void  beSigned( const Bureaucrat& obj );
		void excutionCheck(Bureaucrat const & executor) const;
		virtual void execute(Bureaucrat const & executor) const = 0;

		class	GradeTooHighException: std::exception
		{
			private:
				const char *_errorMsg;
			public:
				GradeTooHighException();
				GradeTooHighException(const char *errorMsg);
				const char *what() const throw();
		};

		class GradeTooLowException: std::exception
		{
			private:
				const char *_errorMsg;
			public:
				GradeTooLowException();
				GradeTooLowException(const char *errorMsg);
				const char *what() const throw();
		};

		class FormNotSignedException: std::exception
		{
			private:
				const char *_errorMsg;
			public:
				FormNotSignedException();
				FormNotSignedException(const char *errorMsg);
				const char *what() const throw();
		};

		class ExecutionGradeTooLowException: std::exception
		{
			private:
				const char *_errorMsg;
			public:
				ExecutionGradeTooLowException();
				ExecutionGradeTooLowException(const char *errorMsg);
				const char *what() const throw();
		};
};

std::ostream&	operator<<( std::ostream& os, const AForm& obj );

#endif