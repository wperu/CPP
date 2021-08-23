#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : Claptrap("Default name" ,100, 50, 20)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : Claptrap(name, 100, 50, 20)
{
	std::cout << "FragTrap constructor with argument name called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	std::cout << "FragTrap constructor copy called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		Claptrap::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & rhs )
{
	o << "Name = " << rhs.get_name() << "\nHitpoint = " << rhs.get_hitpoints()
	<< "\nEnergy point = " << rhs.get_energy_point()
	 << "\nAttack damage = " << rhs.get_attack_damage();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " give me a high five !" << std::endl;
}