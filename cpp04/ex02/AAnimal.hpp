/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:20 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:49:27 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{

	public:

		AAnimal();
		AAnimal( AAnimal const & src );
		AAnimal(std::string type);
		virtual ~AAnimal();
		virtual void makeSound(void) const = 0;
		AAnimal &		operator=( AAnimal const & rhs );
		std::string getType(void) const;
	protected:
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, AAnimal const & rhs );

#endif /* ********************************************************** ANIMAL_H */