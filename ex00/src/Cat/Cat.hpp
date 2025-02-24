/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:00:34 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/24 14:14:21 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"

class Cat : Animal
{
	Cat();
	Cat(const string_t &type);
	Cat(const Cat &other);
	Cat& operator=(const Cat &other);
	~Cat();

	void	makeSound();
};

#endif
