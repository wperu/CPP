/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 14:41:07 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 20:07:14 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery Form",145,137)
{
	set_target("shrubbery");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery Form",145,137)
{
	set_target(target);	
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) : Form(src)
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{	
		Form::operator=(rhs);
		this->target = rhs.get_target();
	}	
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & rhs )
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
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if(this->get_signed() == 1)
	{
		if(this->get_exec() >= executor.getGrade())
		{	
			std::cout << executor.getName() << " execute " << this->get_name() << std::endl;
			std::ofstream file;
			file.open(this->get_target() + "_shrubbery");
			file<< "      /\\\n" \
				<< "     /\\*\\\n" \
				<< "    /\\O\\*\\\n" \
				<< "   /*/\\/\\/\\\n" \
				<< "  /\\O\\/\\*\\/\\\n" \
				<< " /\\*\\/\\*\\/\\/\\\n" \
				<< "/\\O\\/\\/*/\\/O/\\\n" \
				<< "      ||\n" \
				<< "      ||\n" \
				<< "      ||\n";
			file.close();
		}
		else
			throw ShrubberyCreationForm::GradeTooLowException();
	}
	else
		throw ShrubberyCreationForm::NoSigned();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string ShrubberyCreationForm::get_target() const
{
	return(this->target);
}
void ShrubberyCreationForm::set_target(std::string target)
{
	this->target = target;	
}

/* ************************************************************************** */