#include "DiamondTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/
const std::string Diamond_default = "DiamondTrap_defaultname";
const std::string Claptrap_default = "_clap_name";

DiamondTrap::DiamondTrap(void) : Claptrap( Diamond_default + Claptrap_default),ScavTrap(), FragTrap(),name(Diamond_default)
{
	std::cout << "DiamondTrap constructor default called" << std::endl;
	this->FragTrap::set_hit_points();
	this->ScavTrap::set_energy_points();
	this->FragTrap::set_attack_damage();
	return;
}

DiamondTrap::DiamondTrap(std::string name) : Claptrap( name + Claptrap_default),ScavTrap(), FragTrap(),name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->FragTrap::set_hit_points();
	this->ScavTrap::set_energy_points();
	this->FragTrap::set_attack_damage();
	return;
}

DiamondTrap::DiamondTrap( const DiamondTrap & src )
{
	std::cout << "Diamond constructor copy called" << std::endl;
	*this=src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{
	std::cout<< "Diamond destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		Claptrap::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & rhs )
{
	o << "Name = " << rhs.get_name() << "\nHitpoint = " << rhs.get_hitpoints()
	<< "\nEnergy point = " << rhs.get_energy_point()
	 << "\nAttack damage = " << rhs.get_attack_damage();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamonTrap name : " << this->name << std::endl;
	std::cout << "ClapTrap name   : " << this->get_name() << std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */