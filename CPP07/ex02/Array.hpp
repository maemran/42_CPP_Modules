/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:21:29 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 00:41:23 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class   Array
{
    private:
        T* _array;
        unsigned int    _size;
    public:
        Array();
        Array( unsigned int n );
        Array( const Array& other );
        Array&  operator=( const Array& other );
        ~Array();

        unsigned int size() const;

        T&  operator[]( unsigned int index );
};

    #include "Array.tpp"

#endif