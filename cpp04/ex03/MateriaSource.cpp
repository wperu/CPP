/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 02:58:03 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 02:58:04 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4 ; i++)
		this->src[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	for(int i = 0; i < 4 ; i++)
		this->src[i] = src.src[i];
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	if(this != &rhs)
	{
		for(int i = 0; i < 4 ; i++)
			this->src[i] = rhs.src[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, MateriaSource const & rhs )
{
	for(int i = 0; i < 4 ;i++)
	{
		o << "Materia[" << i <<"] = " << rhs.get_src(i);
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void MateriaSource::learnMateria(AMateria* meteria)
{
	if(meteria != NULL)
	{
		for(int i = 0 ; i < 4 ; i++)
		{
			if(this->src[i] == NULL)
			{
				this->src[i] = meteria;
				break;
			}
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0 ; i < 4; i++)
	{
		if(this->src[i]->getType() == type)
			return(this->src[i]->clone());
	}
	return(NULL);

}

std::string MateriaSource::get_src(int i) const
{
	return this->src[i]->getType();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */