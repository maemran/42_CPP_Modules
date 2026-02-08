/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran < maemran@student.42amman.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 23:39:23 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 00:55:19 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
    _size = 0;
    _array = 0;
}

template <typename T>
Array<T>::Array( unsigned int n )
{
    _size = n;
    _array = new T[n];
}

template <typename T>
Array<T>::Array( const Array& other )
{
    _size = other._size;
    _array = new T[_size];
    for (unsigned int i = 0; i < _size; ++i)
    {
        this->_array[i] = other._array[i];
    }
}

template <typename T>
Array<T>&  Array<T>::operator=( const Array& other)
{
    if (this != &other)
    {
        this->_size = other._size;
        delete[] this->_array;
        _array = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
        {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}

template <typename T>
T&  Array<T>::operator[]( unsigned int index )
{
    if (index >= _size)
        throw std::out_of_range("Out of range");
    return _array[index];
}
