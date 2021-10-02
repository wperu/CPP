#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria
{

	public:

		AMateria();
		AMateria(std::string const & type);
		AMateria( AMateria const & src );
		virtual ~AMateria();
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
		AMateria &		operator=( AMateria const & rhs );

	protected:
		std::string type;

};

std::ostream &			operator<<( std::ostream & o, AMateria const & rhs );

#endif /* ******************************************************** AMATERIA_H */