/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:01:28 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 21:10:39 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>


Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &other) : AMateria(other._type) {}
Cure& Cure::operator=(const Cure &other)
{
	if (this != &other)
		_type = other._type;
	return (*this);
}
Cure::~Cure() {}

AMateria* Cure::clone() const { return (new Cure(*this)); }

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
