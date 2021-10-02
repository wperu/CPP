/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:17 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:31:59 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Constructor default Brain" << std::endl;	
}

Brain::Brain( const Brain & src )
{
	std::cout << "Constructor copy Brain" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "destructor Brain called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for(int i = 0; i < 100 ; i++)
			this->ideas[i] = rhs.get_ideas(i);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & rhs )
{
	int i = 0;
	
	while(i < 100)
	{
		o << "ideas = " << rhs.get_ideas(i);
		i++;
	}
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::string Brain::get_ideas(size_t i) const
{
	return(this->ideas[i]);
}

void Brain::set_ideas(int i, std::string idea)
{
	this->ideas[i] = idea;
}