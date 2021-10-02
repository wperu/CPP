/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:06:33 by wperu             #+#    #+#             */
/*   Updated: 2021/09/21 18:11:02 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name ,int sign, int exec) :name(name),  g_sign(sign) , g_exec(exec)
{
	if(g_sign > 150 || g_exec > 150)
		throw Form::GradeTooLowException();
	else if(g_sign < 1 || g_exec < 1)
		throw Form::GradeTooHighException();
	this->sign = false;
}

Form::Form( const Form & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if(rhs.g_sign > 150 || rhs.g_exec > 150)
		throw Form::GradeTooLowException();
	else if(rhs.g_sign < 1 || rhs.g_exec < 1)
		throw Form::GradeTooHighException();
	if ( this != &rhs )
	{
		this->g_exec = rhs.get_exec();
		this->g_sign = rhs.get_sign();
		this->sign = rhs.get_signed();
		this->name = rhs.get_name();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & rhs )
{
	o <<"name = " << rhs.get_name()<< ", Grade for sign = " << rhs.get_sign() << ", grade for execute = " << rhs.get_exec() << ",signed = " << rhs.get_signed(); 
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
int Form::get_sign() const
{
	return(this->g_sign);
}

int Form::get_exec() const
{
	return(this->g_exec);	
}

std::string Form::get_name() const
{
	return(this->name);
}

bool Form::get_signed() const
{
	return(this->sign);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return("Grade Too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return("Grade Too Low");
}

const char* Form::NoSigned::what() const throw()
{
	return("no Signed");
}

void Form::beSigned(Bureaucrat guys)
{
	if(guys.getGrade() <= this->g_sign)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}
