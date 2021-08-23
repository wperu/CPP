/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 16:17:28 by wperu             #+#    #+#             */
/*   Updated: 2021/08/23 14:24:09 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Claptrap::Claptrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Claptrap";
	this->hitpoints = 10;
	this->attack_damage = 0;
	this->energy_point = 10;
}

Claptrap::Claptrap(std::string name)
{
	std::cout<< "constructor with argument name called" << std::endl;
	this->name = name;
	this->hitpoints = 10;
	this->attack_damage = 0;
	this->energy_point = 10;
}

Claptrap::Claptrap( const Claptrap & src )
{
	std::cout << "constructor copy called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Claptrap::~Claptrap()
{
	std::cout<< "destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Claptrap &				Claptrap::operator=( Claptrap const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->name = rhs.get_name();
		this->hitpoints = rhs.get_hitpoints();
		this->energy_point = rhs.get_energy_point();
		this->attack_damage = rhs.get_attack_damage();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Claptrap const & rhs)
{
	o << "Name = " << rhs.get_name() << "\nHitpoint = " << rhs.get_hitpoints()
	<< "\nEnergy point = " << rhs.get_energy_point()
	 << "\nAttack damage = " << rhs.get_attack_damage();
	return o;
}

std::string Claptrap::get_name(void) const
{
	return(this->name);
}

int	Claptrap::get_hitpoints(void) const
{
	return(this->hitpoints);
}

int Claptrap::get_attack_damage(void) const
{
	return(this->attack_damage);
}

int Claptrap::get_energy_point(void) const
{
	return(this->energy_point);
}

void Claptrap::attack(std::string const & target)
{
	std::cout<< "Claptrap " << this->name << " attack " << target << ", causing " 
	<< this->attack_damage << " points of damage!" << std::endl; 
}

void Claptrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->name << " take " << amount << " point damage!" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " << this->name << " repairs itself of " << amount << " points!" << std::endl;
}