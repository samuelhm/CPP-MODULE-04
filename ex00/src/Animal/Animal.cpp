/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:37:53 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 10:20:01 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal Default Constructor Call." << std::endl;
}

Animal::Animal(const std::string Type)
{
	type = Type;
	std::cout << "Animal Specific Constructor Call." << std::endl;
}

Animal::Animal(const Animal &other)
{
	type = other.type;
	std::cout << "Animal Copy Constructor Call." << std::endl;
}

Animal&	Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Constructor Call." << std::endl;
}

const std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::setType(const std::string &Type)
{
	this->type = Type;
}

void	Animal::makeSound() const
{
	std::cout << "*strange sound*" << std::endl;
}
