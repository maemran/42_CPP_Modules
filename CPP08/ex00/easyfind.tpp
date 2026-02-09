/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:01:21 by maemran           #+#    #+#             */
/*   Updated: 2026/02/09 14:51:32 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator  easyfind(T&  container, int i)
{
	typename T::iterator	iter = 	find(container.begin(), container.end(), i);
	if (iter == container.end())
		throw	std::runtime_error("Value not found");
	return iter;
}
