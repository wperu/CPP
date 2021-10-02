/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wperu <wperu@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 16:22:14 by wperu             #+#    #+#             */
/*   Updated: 2021/09/14 03:32:21 by wperu            ###   ########lyon.fr   */
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
		Brain &		operator=( Brain const & rhs );
		void set_ideas(int i, std::string idea);
	private:
		std::string ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & rhs );

#endif /* *********************************************************** BRAIN_H */