#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal()
{
	std::cout<< "constructor Animal called" << std::endl;
	this->type = "";
}

Animal::Animal( const Animal & src )
{
	std::cout << "constructor Animal copy" << std::endl;
	*this = src;
}

Animal::Animal(std::string type)
{
	std::cout << "contructor Animal with type called" << std::endl;
	this->type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << "destructor Animal called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	std::cout << "Animal Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Animal::makeSound(void) const
{
	//std::cout << "default makesound" << std::endl;
}

std::string Animal::getType(void) const
{
	return(this->type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */