/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:41:01 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 20:01:10 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45)
{
	set_target("robotomized");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm",72,45)
{
	set_target(target);
}


RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{	
		Form::operator=(rhs);
		this->target = rhs.get_target();
	}	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & rhs )
{
	o << " name= " << rhs.get_name() << std::endl
	<< " Grade for execute = " << rhs.get_exec() << std::endl
	<< " Grade for signed = " << rhs.get_sign() << std::endl
	<< " signed = " << rhs.get_signed() << std::endl
	<< " target = " << rhs.get_target() << std::endl;
	
	return(o);
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	srand(time(NULL));
	int succes = rand() % 2;
	if(this->get_signed() == 1)
	{
		if(this->get_exec() >= executor.getGrade())
		{	
			std::cout << executor.getName() << " execute " << this->get_name() << std::endl;
			std::cout << "DOIIING DOIIING" << std::endl;
			if(succes == 1) 
				std::cout << this->target << " robotomized success" << std::endl;
			else
				std::cout << this->target << " robotmized failure" << std::endl;
		}
		else
			throw RobotomyRequestForm::GradeTooLowException();
	}
	else
		throw RobotomyRequestForm::NoSigned();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string RobotomyRequestForm::get_target() const
{
	return(this->target);
}
void RobotomyRequestForm::set_target(std::string target)
{
	this->target = target;	
}

/* ************************************************************************** */