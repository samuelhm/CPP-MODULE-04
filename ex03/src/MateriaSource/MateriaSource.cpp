/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:19:31 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 22:10:59 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>


MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) { *this = other; }

MateriaSource& MateriaSource::operator=(const MateriaSource& other )
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
		{
			delete materias[i];
			materias[i] = NULL;
		}
		if (other.materias[i] != NULL)
			this->materias[i] = other.materias[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (materias[i])
		{
			delete materias[i];
			materias[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "Cannot learn a NULL materia!" << std::endl;
		return;
	}
	int i = 0;
	while (i < 4 && materias[i] != NULL)
		i++;
	if (i >= 4)
		std::cout << "Inventory full, cannot learn this materia." << std::endl;
	else
	{
		materias[i] = m;
		std::cout << "Materia learned" << std::endl;
	}
}

AMateria *MateriaSource::createMateria(const std::string& type)
{
	int i = 0;
	while (i < 4 && materias[i] != NULL)
	{
		if (materias[i]->getType() == type)
			return (materias[i]->clone());
		i++;
	}
	std::cout << "Unknown Materia, cannot create it!." << std::endl;
	return NULL;
}
