#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();
		void learnMateria(AMateria* mate);
		AMateria* createMateria(std::string const & type);
		MateriaSource &		operator=( MateriaSource const & rhs );
		std::string get_src(int i) const ;
	
		AMateria* src[4];


};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & rhs );

#endif /* *************************************************** MATERIASOURCE_H */