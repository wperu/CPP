#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() :WrongAnimal("WrongCat")
{

    std::cout << "constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src ) :WrongAnimal(src)
{
	std::cout << "constructor WrongCat copy" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "destructor WrongCat called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "WrongCat Assignation operator called" << std::endl;
	if ( this != &rhs )
	{
		WrongAnimal::operator=(rhs);
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & rhs )
{
	o << "type = " << rhs.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void WrongCat::makeSound(void) const
{
	std::cout << "miaou miaou" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */