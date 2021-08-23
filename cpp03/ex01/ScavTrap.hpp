#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "Claptrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public Claptrap
{

	public:

		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		ScavTrap &		operator=( ScavTrap const & rhs );
		void guardGate();

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */