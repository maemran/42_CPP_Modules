/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:06:37 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 12:22:46 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		const	int _gradeToSign;
		const	int _gradeToExecute;
		bool	_isSign;

	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExecute, bool isSign);
		Form( const Form& other );
		Form&	operator=( const Form& other );
		~Form();

		const std::string&	getName() const;
		int	getGTSign() const;
		int getGTExecute() const;
		bool	getIsSign() const;

		void  beSigned( const Bureaucrat& obj );

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
};

std::ostream&	operator<<( std::ostream& os, const Form& obj );

#endif