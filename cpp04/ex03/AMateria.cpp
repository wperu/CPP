/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 02:57:58 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:53:10 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{

}

AMateria::AMateria( const AMateria & src )
{
	*this = src;
}
AMateria::AMateria(std::string const & type)
{
	this->type = type;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AMateria const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void AMateria::use(ICharacter & target)
{
	if(this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
	if(this->type == "cure")
		std::cout << "* heals " << target.getName() <<"'s wounds *" << std::endl;
}
std::string const & AMateria::getType() const
{
	return(this-> type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */