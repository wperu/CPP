#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : Claptrap("Default name" ,100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : Claptrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap constructor with argument name called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap constructor copy called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout<< "ScavTrap destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		Claptrap::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & rhs )
{
	o << "Name = " << rhs.get_name() << "\nHitpoint = " << rhs.get_hitpoints()
	<< "\nEnergy point = " << rhs.get_energy_point()
	 << "\nAttack damage = " << rhs.get_attack_damage();
	
	return o;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " have enterred in Gate Keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	std::cout<< "ScavTrap " << this->name << " attack " << target << ", causing " 
	<< this->attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::set_energy_points(void)
{
	this->energy_point = 50;
}