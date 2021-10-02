/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 03:52:23 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:52:24 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character()
{
	this->name = "default name";
	for (int i = 0; i < 4 ; i++)
		this->stock[i] = NULL;
}

Character::Character( const Character & src )
{
	*this = src;
}

Character::Character(std::string const & name)
{
	this->name = name;
	for (int i = 0; i < 4 ; i++)
		this->stock[i] = NULL;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->name = rhs.getName();
		for(int i = 0 ; i < 4 ; i++)
			this->stock[i]=rhs.stock[i];
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & rhs )
{
	o << "Name" << rhs.getName();
	for(int i = 0; i < 4 ; i++)
	{
		o << "stock[" << i << "] " << rhs.get_stock(i);
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Character::equip(AMateria *m)
{
	if (m != NULL)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->stock[i] == NULL)
			{
				this->stock[i] = m;
				break;
			}
		}
	}
}

void Character::unequip(int idx)
{
	if(idx < 4 && idx >= 0)
	{
		if(this->stock[idx] != NULL)
			this->stock[idx] = NULL; 
	}
}

void Character::use(int idx, ICharacter& target)
{
	if(idx < 4 && idx >= 0)
	{
		if(this->stock[idx] != NULL)
			this->stock[idx]->use(target);
	}
}

std::string const & Character::getName() const
{
	return(this->name);
}

std::string Character::get_stock(int i) const
{
	return this->stock[i]->getType();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */