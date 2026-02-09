/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:42:41 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 18:35:59 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_maxSize = 10000;
}

Span::Span( unsigned int N )
{
	_maxSize = N;
}

Span::Span( const Span& other )
{
	_maxSize = other._maxSize;
	_v = other._v;
}

Span&	Span::operator=( const Span& other )
{
	if (this != &other)
	{
		_maxSize = other._maxSize;
		_v = other._v;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int i)
{
	if (_v.size() >= _maxSize)
		throw	std::runtime_error("Span is full");
	_v.push_back(i);
}

int	Span::longestSpan()
{
	if (_v.size() <= 1)
		throw	std::runtime_error("Size must be greater than 1");
	std::sort(_v.begin(), _v.end());
	int diff = abs(_v[_v.size() - 1] - _v[0]);
	return (diff);
}

int	Span::shortestSpan()
{
	if (_v.size() <= 1)
		throw	std::runtime_error("Size must be greater than 1");
	std::sort(_v.begin(), _v.end());
	int minDiff = std::numeric_limits<int>::max();
	for (size_t i = 1; i < _v.size(); i++)
	{
		int diff = _v[i] - _v[i - 1];
		if (diff < minDiff)
			minDiff = diff;
	}
	return (minDiff);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
    {
        if (_v.size() >= _maxSize)
            throw std::runtime_error("Span is full");
        _v.push_back(*it);
    }
}
