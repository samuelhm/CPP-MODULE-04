/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 19:40:20 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/28 20:23:19 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "../AMateria/AMateria.hpp"
#include "../interfaces/IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& other);
		MateriaSource &operator=(const MateriaSource& other);
		~MateriaSource(void);

		virtual void		learnMateria(AMateria *m);
		virtual	AMateria	*createMateria(const std::string &type);
};

#endif
