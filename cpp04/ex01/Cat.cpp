/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:25 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:38:38 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout<< "constructor Cat called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat( const Cat & src ) : Animal(src)
{
	std::cout << "constructor Cat copy" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->brain;
	std::cout << "destructor Cat called" << std::endl;
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	std::cout << "Cat Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		Animal::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Cat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}


void Cat::set_ideas(int i, std::string idea)
{
    this->brain->set_ideas(i, idea);
}

std::string Cat::get_ideas(int i) const
{
    return (this->brain->get_ideas(i));
}