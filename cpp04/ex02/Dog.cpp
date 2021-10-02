/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:29 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:42:31 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog")
{
	std::cout<< "constructor Dog called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog( const Dog & src ) : AAnimal(src)
{
	std::cout << "constructor Dog copy" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->brain;
	std::cout << "destructor Dog called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	std::cout << "Dog Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		AAnimal::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Dog::makeSound(void) const
{
	std::cout << "wouaf wouaf" << std::endl;
}

void Dog::set_ideas(int i, std::string idea)
{
    this->brain->set_ideas(i, idea);
}

std::string Dog::get_ideas(int i) const
{
    return (this->brain->get_ideas(i));
}