/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:27 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:35:01 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"
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
		void set_ideas( int i, std::string idea);
		std::string get_ideas(int i) const;
	private:
		Brain *brain;

};

std::ostream &			operator<<( std::ostream & o, Cat const & rhs );

#endif /* ************************************************************* CAT_H */