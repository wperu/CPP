/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:14 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:31:50 by wperu            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();
		std::string get_ideas(size_t i) const;
		void set_ideas(int i, std::string idea);
		Brain &		operator=( Brain const & rhs );
	private:
		std::string ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & rhs );

#endif /* *********************************************************** BRAIN_H */