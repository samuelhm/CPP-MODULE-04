/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:13:40 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 21:41:27 by shurtado         ###   ########.fr       */
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
		if (other.materias[i] != NULL)
			materias[i] = other.materias[i]->clone();
}
Character& Character::operator=(const Character &other)
{
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
	while (materias[i])
		i++;
	if (i >= 3)
		std::cout << "Inventory full, cannot equip this materia." << std::endl;
	else
	{
		materias[i] = m;
		std::cout << "Materia equiped" << std::endl;
	}
}
void Character::unequip(int idx)
{
	if (idx > 4 || idx < 1)
	{
		std::cout << "Inventory slots is 1 to 4!!" << std::endl;
		return ;
	}
	if (!materias[idx - 1])
		std::cout << "Inventory slot " << idx << " is empty!!"<< std::endl;
	else
	{
		materias[idx - 1] = NULL;
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
