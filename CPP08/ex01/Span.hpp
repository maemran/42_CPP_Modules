/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:25:42 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 16:15:22 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iostream>

class Span
{
	private:
		unsigned int _maxSize;
		std::vector<int> _v;
	public:
		Span();
		Span( unsigned int N );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span();

		void	addNumber(int num);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
};

#endif