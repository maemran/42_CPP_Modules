/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maemran <maemran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:30:54 by maemran           #+#    #+#             */
/*   Updated: 2025/09/20 17:33:09 by maemran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
	    AMateria* inventory[4];
	
	public:
	    MateriaSource();
	    MateriaSource(const MateriaSource& other);
	    MateriaSource& operator=(const MateriaSource& other);
	    ~MateriaSource();
	
	    void learnMateria(AMateria* m);
	    AMateria* createMateria(std::string const& type);
};

#endif
