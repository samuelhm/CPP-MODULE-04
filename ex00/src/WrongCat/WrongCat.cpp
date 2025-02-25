/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:00:43 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/25 10:14:33 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor Call." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	type = other.type;
	std::cout << "WrongCat Copy Constructor Call." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor call." << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Miauuuu" << std::endl;
}
