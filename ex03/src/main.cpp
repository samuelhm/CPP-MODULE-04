/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 18:23:44 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 22:21:08 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria/AMateria.hpp"
#include "interfaces/IMateriaSource.hpp"
#include "interfaces/ICharacter.hpp"
#include "Character/Character.hpp"
#include "Ice/Ice.hpp"
#include "Cure/Cure.hpp"
#include "MateriaSource/MateriaSource.hpp"
#include <iostream>

void inventoryOverflowTest()
{
	std::cout << "\n===== INVENTORY OVERFLOW TEST =====\n";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));
	me->equip(src->createMateria("ice"));
	me->equip(src->createMateria("cure"));

	// Intentar equipar una materia más debería fallar, y la materia se eliminará en equip()
	AMateria* extraMateria = src->createMateria("ice");
	me->equip(extraMateria); // ❌ Esta materia se eliminará automáticamente dentro de `equip()`, no hace falta delete

	delete me;
	delete src;
}

void unequipTest()
{
	std::cout << "\n===== UNEQUIP TEST =====\n";

	ICharacter* me = new Character("me");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* ice = src->createMateria("ice");
	AMateria* cure = src->createMateria("cure");

	me->equip(ice);
	me->equip(cure);

	me->use(0, *me);
	me->use(1, *me);

	me->unequip(0);
	me->unequip(1);

	// Como `unequip()` no borra la materia, debemos eliminarla manualmente
	delete ice;
	delete cure;

	delete me;
	delete src;
}

void characterCopyTest()
{
	std::cout << "\n===== CHARACTER COPY TEST =====\n";

	ICharacter* original = new Character("original");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	AMateria* ice = src->createMateria("ice");
	original->equip(ice);

	ICharacter* copy = new Character(*dynamic_cast<Character*>(original));

	std::cout << "Using original: ";
	original->use(0, *original);

	std::cout << "Using copy: ";
	copy->use(0, *copy);

	delete original;
	delete copy;
	delete src;
}

void characterAssignmentTest()
{
	std::cout << "\n===== CHARACTER ASSIGNMENT TEST =====\n";

	ICharacter* char1 = new Character("char1");
	ICharacter* char2 = new Character("char2");

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());

	AMateria* ice = src->createMateria("ice");
	char1->equip(ice);

	std::cout << "Before assignment:\n";
	char1->use(0, *char1);
	char2->use(0, *char2);

	*dynamic_cast<Character*>(char2) = *dynamic_cast<Character*>(char1);

	std::cout << "After assignment:\n";
	char1->use(0, *char1);
	char2->use(0, *char2);

	delete char1;
	delete char2;
	delete src;
}

int main()
{
	std::cout << "\n===== STANDARD TEST =====\n";

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	// Ejecutar los tests adicionales
	inventoryOverflowTest();
	unequipTest();
	characterCopyTest();
	characterAssignmentTest();

	return 0;
}
