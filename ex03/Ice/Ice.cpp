/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:01:44 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/26 13:05:57 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice"){}
Ice::Ice(const Ice &other) : AMateria(other.type) {}
Ice& Ice::operator=(const Ice &other) {return (*this);}
Ice::~Ice() {}
