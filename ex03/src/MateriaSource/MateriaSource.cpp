/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:19:31 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 20:46:05 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>


MateriaSource::MateriaSource(void) {}

MateriaSource::MateriaSource(const MateriaSource& other) { *this = other; }

MateriaSource& MateriaSource::operator=(const MateriaSource& other ) {
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			this->materias[i] = other.materias[i];
		}
	}
	return *this;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4 ; i++)
		if (materias[i])
			delete materias[i];
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;
	while (materias[i] != NULL && i < 3)
		i++;
	if (i >= 3)
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
	while (materias[i] != NULL && i < 3)
	{
		if (materias[i]->getType().compare(type))
			return (materias[i]);
		i++;
	}
	std::cout << "Unknown Materia, cannot create it!." << std::endl;
	return NULL;
}
