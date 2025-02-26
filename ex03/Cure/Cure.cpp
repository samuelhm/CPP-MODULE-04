/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:01:28 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/26 13:06:37 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure &other) : AMateria(other.type) {}
Cure& Cure::operator=(const Cure &other) {return (*this);}
Cure::~Cure() {}
