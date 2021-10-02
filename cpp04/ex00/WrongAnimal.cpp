#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal()
{
	std::cout<< "constructor WrongAnimal called" << std::endl;
	this->type = "";
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "constructor WrongAnimal copy" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "contructor WrongAnimal with type called" << std::endl;
    this->type = type;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "destructor WrongAnimal called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "WrongAnimal Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & rhs )
{
	o << "Type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void WrongAnimal::makeSound(void) const
{
	std::cout << "default makesound" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return(this->type);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */