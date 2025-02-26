/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:57:19 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/26 13:01:12 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "../AMateria/AMateria.hpp"
#include "../interfaces/ICharacter.hpp"

class Cure : public AMateria, public ICharacter
{
	public:
		Cure();
		Cure(const Cure &other);
		Cure& operator=(const Cure &other);
		~Cure();
};

#endif
