/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:40:52 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 20:01:38 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm",25,5)
{
	set_target("defaut target");	
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm",25,5)
{
	set_target(target);
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ) : Form(src)
{
	*this=src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &				PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	if ( this != &rhs )
	{
		Form::operator=(rhs);
		this->target = rhs.get_target();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PresidentialPardonForm const & rhs )
{
	o << " name= " << rhs.get_name() << std::endl;
	o << " Grade for execute = " << rhs.get_exec() << std::endl;
	o << " Grade for signed = " << rhs.get_sign() << std::endl;
	o << " signed = " << rhs.get_signed() << std::endl;
	o << " target = " << rhs.get_target() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void  PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	if(this->get_signed() == 1)
	{	
		if( executor.getGrade() <= this->get_exec())
		{
				std::cout << executor.getName() << " execute " << this->get_name() << std::endl;
				std::cout << "Zafod Beeblebrox forgive " << this->target << std::endl; 
		}
		else
			throw PresidentialPardonForm::GradeTooLowException();
	}
	else
		throw PresidentialPardonForm::NoSigned();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string PresidentialPardonForm::get_target() const
{
	return(this->target);
}
void PresidentialPardonForm::set_target(std::string target)
{
	this->target = target;	
}

/* ************************************************************************** */