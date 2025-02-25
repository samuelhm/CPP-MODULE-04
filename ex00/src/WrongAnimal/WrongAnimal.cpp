/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 10:20:01 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal Default Constructor Call." << std::endl;
}

WrongAnimal::WrongAnimal(const std::string Type)
{
	type = Type;
	std::cout << "WrongAnimal Specific Constructor Call." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	type = other.type;
	std::cout << "WrongAnimal Copy Constructor Call." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Constructor Call." << std::endl;
}

const std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::setType(const std::string &Type)
{
	this->type = Type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*strange sound*" << std::endl;
}
