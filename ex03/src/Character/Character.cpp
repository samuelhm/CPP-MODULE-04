/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:13:40 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 22:30:55 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character() : name("Unnamed")
{
	for (int i = 0; i < 4 ; i++)
		materias[i] = NULL;
}
Character::Character(const std::string &Name) : name(Name)
{
	for (int i = 0; i < 4 ; i++)
		materias[i] = NULL;
}
Character::Character(const Character &other) : name(other.name)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (other.materias[i])
			materias[i] = other.materias[i]->clone();
		else
			materias[i] = NULL;
	}
}
Character& Character::operator=(const Character &other)
{
	if (this == &other)
		return (*this);
	name = other.name;
	for (int i = 0; i < 4 ; i++)
		if (materias[i] != NULL)
		{
			delete materias[i];
			materias[i] = NULL;
		}
	for (int i = 0; i < 4 ; i++)
		if (other.materias[i] != NULL)
			materias[i] = other.materias[i]->clone();
	return (*this);
}
Character::~Character()
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

std::string const & Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	if (!m)
		return ;
	while (i < 4 && materias[i])
		i++;
	if (i == 4)
	{
		std::cout << "Inventory full, cannot equip this materia." << std::endl;
		delete m;
	}
	else
	{
		materias[i] = m;
		std::cout << "Materia equiped" << std::endl;
	}
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Inventory slots is 0 to 3!!" << std::endl;
		return ;
	}
	if (!materias[idx])
		std::cout << "Inventory slot " << idx << " is empty!!"<< std::endl;
	else
	{
		materias[idx] = NULL;
		std::cout << "Materia unequiped" << std::endl;
	}
}
void Character::use(int idx, ICharacter& target)
{
	if (idx >= 4 || idx < 0)
	{
		std::cout << "Inventory slots is 1 to 4!!" << std::endl;
		return ;
	}
	if (materias[idx])
		materias[idx]->use(target);
	else
		std::cout << "No materias found in this slot!!" << std::endl;
}
