/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 00:41:17 by maemran           #+#    #+#             */
/*   Updated: 2026/02/01 15:24:37 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <iostream>

class AForm;

class   Bureaucrat
{
    private:
        std::string    _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat( const std::string  &name, int grade );
        Bureaucrat( const Bureaucrat& other );
        Bureaucrat& operator=( const Bureaucrat& other );
        ~Bureaucrat();

        const   std::string&    getName() const;
        int getGrade() const;

        void    incrementGrade(int num);
        void    decrementGrade(int num);
		void   	signForm( AForm& obj ) const;
		void	executeForm(AForm const & form) const;

        class   GradeTooHighException: std::exception
        {
            private:
                const char *_errorMsg;
            public:
                GradeTooHighException();
                GradeTooHighException( const char *errorMsg );
                const char *what() const throw();
        };

        class   GradeTooLowException: std::exception
        {
            private:
                const char *_errorMsg;
            public:
                GradeTooLowException();
                GradeTooLowException( const char *errorMsg );
                const char *what() const throw();
        };
};

std::ostream&  operator<<( std::ostream& os, const Bureaucrat& obj );

#endif