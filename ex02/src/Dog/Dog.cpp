/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:02:16 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 20:09:02 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Default Constructor Call." << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other), brain(NULL)
{
	std::cout << "Dog Copy Constructor Call." << std::endl;
	if (other.brain)
		this->brain = new Brain(*other.brain);
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.type;
		if (this->brain)
			delete (this->brain);
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor call." << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Guau! Guau!" << std::endl;
}
