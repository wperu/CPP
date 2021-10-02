/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:22 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:49:34 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal()
{
	std::cout<< "constructor AAnimal called" << std::endl;
	this->type = "";
}

AAnimal::AAnimal( const AAnimal & src )
{
	std::cout << "constructor AAnimal copy" << std::endl;
	*this = src;
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "contructor AAnimal with type called" << std::endl;
	this->type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << "destructor AAnimal called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	std::cout << "AAnimal Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string AAnimal::getType(void) const
{
	return(this->type);
}

