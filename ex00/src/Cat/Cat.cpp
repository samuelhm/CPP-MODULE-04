/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:00:43 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 10:14:33 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat Default Constructor Call." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	type = other.type;
	std::cout << "Cat Copy Constructor Call." << std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor call." << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miauuuu" << std::endl;
}
