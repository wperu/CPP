#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>
# include <string>

class Cat : public Animal
{

	public: 

		Cat();
		Cat( Cat const & src );
		~Cat();
		void makeSound(void) const;
		Cat &		operator=( Cat const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, Cat const & rhs );

#endif /* ************************************************************* CAT_H */