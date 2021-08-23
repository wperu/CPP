#include "FragTrap.hpp"
#include "Claptrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : Claptrap("Default name" ,100, 100, 30)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : Claptrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called" << std::endl;
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

void FragTrap::set_hit_points(void)
{
	this->hitpoints = 100;
}

void  FragTrap::set_attack_damage(void)
{
	this->attack_damage = 30;
}