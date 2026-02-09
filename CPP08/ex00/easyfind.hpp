/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:38:55 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 14:51:32 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template <typename T>
typename T::iterator  easyfind(T&  container, int i);

#include "easyfind.tpp"

#endif