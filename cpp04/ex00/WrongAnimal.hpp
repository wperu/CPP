#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( WrongAnimal const & src );
		WrongAnimal(std::string type);
		virtual ~WrongAnimal();
		void makeSound(void) const;
		WrongAnimal &		operator=( WrongAnimal const & rhs );
		std::string getType(void) const;
	protected:
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & rhs );

#endif /* ********************************************************** ANIMAL_H */