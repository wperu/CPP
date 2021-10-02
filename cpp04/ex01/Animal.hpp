/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:20 by wperu             #+#    #+#             */
/*   Updated: 2021/09/08 16:22:25 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{

	public:

		Animal();
		Animal( Animal const & src );
		Animal(std::string type);
		virtual ~Animal();
		virtual void makeSound(void) const;
		Animal &		operator=( Animal const & rhs );
		std::string getType(void) const;
	protected:
		std::string type;
};

std::ostream &			operator<<( std::ostream & o, Animal const & rhs );

#endif /* ********************************************************** ANIMAL_H */