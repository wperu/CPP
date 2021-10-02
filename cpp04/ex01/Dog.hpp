/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:33 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:34:23 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		~Dog();
		void makeSound(void) const;
		Dog &		operator=( Dog const & rhs );
		std::string get_ideas(int i) const;
		void set_ideas(int i, std::string idea);
	private:
		Brain *brain;
};

std::ostream &			operator<<( std::ostream & o, Dog const & rhs );

#endif /* ************************************************************* DOG_H */