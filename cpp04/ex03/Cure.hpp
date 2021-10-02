/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 03:52:37 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:52:38 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure( Cure const & src );
		~Cure();
		AMateria* clone() const;
		void use(ICharacter & target);
		Cure &		operator=( Cure const & rhs );


};

std::ostream &			operator<<( std::ostream & o, Cure const & rhs );

#endif /* ************************************************************ CURE_H */