#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{

	public: 

		WrongCat();
		WrongCat( WrongCat const & src );
		~WrongCat();
		void makeSound(void) const;
		WrongCat &		operator=( WrongCat const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, WrongCat const & rhs );

#endif /* ************************************************************* CAT_H */