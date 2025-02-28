/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:03:19 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 20:44:37 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateria") {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return *this;
}

std::string const & AMateria::getType() const {	return _type; }

AMateria::~AMateria() {}

void AMateria::use(ICharacter& target)
{
	std::cout << "Used " << _type << " to " << target.getName() << "." << std::endl;
}
