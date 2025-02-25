/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:00:43 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 19:36:10 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor Call." << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = other.type;
	std::cout << "Cat Copy Constructor Call." << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor call." << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuuu" << std::endl;
}
