/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:58:28 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/26 13:00:41 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "../AMateria/AMateria.hpp"
#include "../interfaces/ICharacter.hpp"

class Ice : public AMateria, public ICharacter
{
	public:
		Ice();
		Ice(const Ice &other);
		Ice& operator=(const Ice &other);
		~Ice();
};

#endif
