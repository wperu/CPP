/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 18:53:42 by wperu             #+#    #+#             */
/*   Updated: 2021/09/24 20:02:55 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string const & name, int const grade) : name(name), grade(grade) 
{
	if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(grade < 1)
		throw Bureaucrat::GradeTooHighException();

}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	
	if(rhs.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if(rhs.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if ( this != &rhs )
		this->grade = rhs.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName()<<", bureaucrat grade " << rhs.getGrade();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::upgrade()
{
	this->grade--;
	if(this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downgrade()
{
	this->grade++;
	if(this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Too Low";
}

int Bureaucrat::getGrade() const
{
	return(this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.get_name() << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " cannot sign because " << e.what() << std::endl;
	}
		
}


void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->name << " cannot execute because " << e.what() << std::endl;
	}
	
}