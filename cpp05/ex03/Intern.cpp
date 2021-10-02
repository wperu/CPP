/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:55:03 by wperu             #+#    #+#             */
/*   Updated: 2021/09/26 16:55:04 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	*this = src; 
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/
Intern & Intern:: operator=(Intern const & rhs )
{
    static_cast<void> (rhs);
    return(*this);
}

Form* Intern::makeForm(std::string typeform, std::string target)
{
	std::string tab[3] = {"presidential pardon", "robotomy request", "shrunnery creation"}; 
    Form *(Intern::*ftab[])(std::string target) =
    {
        &Intern::newpresidential,
        &Intern::newrobotomy,
		&Intern::newshruberry,
	};
    for(int i = 0; i < 3; i++)
    {
        if(typeform.compare(tab[i]) == 0)
        { 
            std::cout << "Intern creates " << typeform << std::endl;
			return(this->*ftab[i])(target);
        }
    }
	return(NULL);
}

Form* Intern::newpresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}
		
Form* Intern::newrobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}
Form* Intern::newshruberry(std::string target)
{
	return new ShrubberyCreationForm(target);
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */