/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:13:50 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/26 13:16:09 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "../AMateria/AMateria.hpp"

class Character : ICharacter
{
	private:
		AMateria *materias[4];
	public:
		Character();
		Character(const Character &other);
		Character& operator=(const Character &other);
		~Character();
};

#endif
