/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:02:16 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 10:14:29 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor Call." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	type = other.type;
	std::cout << "Dog Copy Constructor Call." << std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor call." << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Guau! Guau!" << std::endl;
}
